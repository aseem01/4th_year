#include<bits/stdc++.h>
#include <vector>
#include <deque>
#include <algorithm>
#include <tuple>

long long N, Q;
long long W[210000];
long long G[210000], P[210000];

long long ans[210000];

std::vector <std::tuple <long long, long long, long long> > query[450];

int main () {
	scanf ("%lld%lld", &N, &Q);
	for (long long i = 0; i < N - 1; ++i)
		scanf ("%lld", &W[i]);
	for (long long i = 0; i < N; ++i)
		scanf ("%lld%lld", &G[i], &P[i]);
	for (long long i = 0; i < Q; ++i) {
		long long x, y;
		scanf ("%lld%lld", &x, &y);
		if (x == y) {
			ans[i] = 0;
			continue;
		}
		query[(y - 1) / 450].push_back (std::make_tuple (x - 1, y - 1, i));
	}
	for (long long i = 0; i < 450; ++i)
		std::sort (query[i].begin (), query[i].end (), std::greater <std::tuple <long long, long long, long long> >());
	for (long long block = 0; block < 450; ++block) {
		if (query[block].empty ()) continue;
		std::deque <std::pair <long long, long long> > queue;
		std::deque <long long> mono;
		std::deque <std::pair <long long, long long> > buyer;
		std::tuple <long long, long long, long long> t = query[block].front ();
		long long first = std::get <0> (t), last = std::get <1> (t), fuel = 0, cost = 0;
		for (long long i = first; i < last; ++i) {
			fuel = fuel + G[i] - W[i];
			if (mono.empty () || P[i] < P[mono.back ()])
				mono.push_back (i);
			if (fuel < 0) {
				if (queue.empty () || mono.back () != queue.back ().first)
					queue.push_back (std::make_pair (mono.back (), -fuel));
				else
					queue.back ().second -= fuel;
				buyer.push_back (std::make_pair (i, -fuel));
				cost += P[mono.back ()] * (-fuel);
				fuel = 0;
			}
		}
		ans[std::get <2> (t)] = cost;
		for (long long p = 1; p < (long long) query[block].size (); ++p) {
			t = query[block][(int) p];
			while (first < std::get <0> (t));
			while (first > std::get <0> (t)) {
				--first;
				while (!mono.empty () && P[first] <= P[mono.front ()]) mono.pop_front ();
				mono.push_front (first);
				if (W[first] - G[first] > 0) {
					buyer.push_front (std::make_pair (first, W[first] - G[first]));
					cost += (W[first] - G[first]) * P[first];
				}
				std::pair <long long, long long> add = std::make_pair (first, std::max (W[first] - G[first], 0LL));
				while (!queue.empty () && P[first] <= P[queue.front ().first]) {
					cost -= (P[queue.front ().first] - P[first]) * queue.front ().second;
					add.second += queue.front ().second;
					queue.pop_front ();
				}
				if (add.second > 0)
					queue.push_front (add);
				if (G[first] - W[first] > 0) {
					long long rem = G[first] - W[first];
					while (!queue.empty () && rem > 0) {
						if (rem >= queue.front ().second) {
							rem -= queue.front ().second;
							cost -= P[queue.front ().first] * queue.front ().second;
							queue.pop_front ();
						} else {
							queue.front ().second -= rem;
							cost -= P[queue.front ().first] * rem;
							rem = 0;
						}
					}
					if (rem > 0) fuel += rem;
					rem = G[first] - W[first];
					while (!buyer.empty () && rem > 0) {
						if (rem >= buyer.front ().second) {
							rem -= buyer.front ().second;
							buyer.pop_front ();
						} else {
							buyer.front ().second -= rem;
							rem = 0;
						}
					}
				}
			}
			while (last < std::get <1> (t)) {
				fuel = fuel + G[last] - W[last];
				if (mono.empty () || P[last] < P[mono.back ()])
					mono.push_back (last);
				if (fuel < 0) {
					if (queue.empty () || mono.back () != queue.back ().first)
						queue.push_back (std::make_pair (mono.back (), -fuel));
					else
						queue.back ().second -= fuel;
					buyer.push_back (std::make_pair (last, -fuel));
					cost += P[mono.back ()] * (-fuel);
					fuel = 0;
				}
				++last;
			}
			while (last > std::get <1> (t)) {
				--last;
				fuel -= (G[last] - W[last]);
				while (!buyer.empty () && buyer.back ().first == last) {
					cost -= P[queue.back ().first] * buyer.back ().second;
					fuel = fuel - buyer.back ().second;
					queue.back ().second -= buyer.back ().second;
					if (queue.back ().second == 0) queue.pop_back ();
					buyer.pop_back ();
				}
				if (!mono.empty () && mono.back () == last) mono.pop_back ();
			}
			ans[std::get <2> (t)] = cost;
		}
	}
	for (long long i = 0; i < Q; i++)
		printf ("%lld\n", ans[i]);
}
