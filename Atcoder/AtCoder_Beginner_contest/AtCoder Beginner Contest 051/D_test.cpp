#include <bits/stdc++.h>

#define rep(i, n)	for(int i=0;i<n;i++)
#define repn(i, n)	for(int i=1;i<=n;i++)
#define set(i, n)	memset(i, n, sizeof(i))

#define pb	push_back

using namespace std;

typedef long long ll;
typedef pair<int, int> pii;

const int N = 107;
const int oo = 1e9;

int n, m, par[N], dis[N], pidx[N];
vector<int>edge[N], cost[N], idx[N];
map< int, int> mp;

void bfs(int at){
	priority_queue<pii>q;
	q.push(pii(0, at));
	rep(i, N) par[i] = -1, dis[i] = oo, pidx[i] = -1;
	dis[at] = 0;
	while(!q.empty()){
		pii f = q.top(); q.pop();
		int u = f.second;
		rep(i, edge[u].size()){
			int v = edge[u][i], c = cost[u][i], dx = idx[u][i];
			if(dis[v] > dis[u] + c){
				dis[v] = dis[u] + c;
				par[v] = u;
				pidx[v] = dx;
				q.push(pii(-dis[v], v));
			}
		}
	}
	repn(i, n){
		int cur = i;
		while(cur != at){
			mp[ pidx[cur] ] = 1;
			cur = par[cur];
		}
	}
}

int main(){
	int x, y, c;
	scanf("%d %d", &n, &m);
	repn(i, m){
		scanf("%d %d %d", &x, &y, &c);
		edge[x].pb(y);
		edge[y].pb(x);
		cost[x].pb(c);
		cost[y].pb(c);
		idx[x].pb(i);
		idx[y].pb(i);
	}
	repn(i, n) bfs(i);
	int ret = 0;
	repn(i, m) ret += (mp[i] == 0);
	cout << ret << endl;
	return 0;
}
