#define ONLINE_JUDGE 1
#include <stdio.h>
#include <iostream>
#include <climits>
#include <map>
#include <cmath>
#include <algorithm>
#include <set>
#include <stack>
#include <deque>
#include <vector>
#include <stdlib.h>
#include <string>
#include <string.h>
#include <utility>
#include <queue>

using namespace std;

#define ll long long
#define sl(n) scanf("%lld", &n)
#define sf(n) scanf("%lf", &n)
#define si(n) scanf("%d", &n)
#define ss(n) scanf("%s", n)
#define pii pair <int, int>
#define pll pair <long long, long long>
#define pb push_back

bool st[10000410];
int prime[6000000];

int main ()
{
    //  freopen("inl.txt", "r", stdin);
    // freopen("outu.txt", "w", stdout);
    //  ios_base::sync_with_stdio(0); // no printf/scanf must be present
    ll cs, t, i, j, k, x, y, z, ans, q, m, prev, n;

    k = 1;

    prime[0] = 2;

    for (i = 3; i <= 10000400; i += 2)
    {
        if (st[i] == 0)
        {
            prime[k++] = i;

            if (i <= 4163)
                for (j = i*i; j <= 10000400; j += 2*i)
                    st[j] = 1;
        }
    }

    st[1] = 1;

    sl(t);

    for (cs = 1; cs <= t; cs++)
    {
        sl(n);

        if (n == 1)
        {
            printf("No\n");
            continue;
        }


        bool fl = true;

        ll sq = sqrt((double) n);

        prev = -1;

        bool f2 = 0;

        for (j = 0; prime[j] <= sq; j++)
        {
        //    cout << j << " " << prime[j] << endl;
            if (n%prime[j] == 0)
            {
                if (prev != -1)
                {
                    if (prev != j-1)
                    {
                        fl = false;
                        break;
                    }
                }
                prev = j;
            }

            while (n%prime[j] == 0)
            {
                n /= prime[j];
            }

            if (n == 1)
                break;
        }

        if (n != 1)
        {
            if (prev != -1 && prime[prev + 1] != n)
                fl = false;
        }

        if (fl == false)
            printf("No\n");
        else printf("Yes\n");
    }

    return 0;
}
