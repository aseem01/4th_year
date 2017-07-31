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
#define pll pair <int, int>
#define plp pair <int, pll >
#define pb push_back

#define fr first
#define sd second

ll a[110];
pll b[110];

ll ans[110];

int main ()
{
  //  freopen("in.txt", "r", stdin);
   // freopen("out.txt", "w", stdout);
  //  ios_base::sync_with_stdio(0); // no printf/scanf must be present
    ll cs, t, i, j, k, x, y, z, q, m, n, w;

    while(cin >> n >> w)
    {
        for (i = 1; i <= n; i++)
        {
            sl(a[i]);
            b[i].fr = a[i];
            b[i].sd = i;
        }

        sort(b + 1, b + n + 1, greater<pll>());

        x = 0;

        for (i = 1; i <= n; i++)
        {
            ans[i] = a[i]/2;
            if (a[i]%2 != 0)
                ans[i]++;

      //      cout << i << " " << ans[i] << endl;
            x += ans[i];
        }

        if (x > w)
        {
            printf("-1\n");
            break;
        }

        w -= x;


     for(int j=1;j<=n;j++)
     {
         cout<<b[j].first<<" "<<b[j].second<<endl;
     }

        for (i = 1; i <= n && w > 0; i++)
        {
            cout<<"b[i].sd = "<<b[i].sd<<endl;
            y = a[b[i].sd] - ans[b[i].sd];
            cout<<"a[b[i].sd] = "<<a[b[i].sd]<<endl;
            cout<<"ans[b[i].sd] = "<<ans[b[i].sd]<<endl;
            cout<<"y = "<<y<<endl;
            if (a[b[i].sd] - ans[b[i].sd] <= w)
            {
                y = a[b[i].sd] - ans[b[i].sd];
                ans[b[i].sd] += y;
                w -= y;
            }
            else
            {
                ans[b[i].sd] += w;
                w = 0;
            }
        }

        for (i = 1; i <= n; i++)
        {
            printf("%lld ", ans[i]);
        }

        printf("\n");
    }

    return 0;
}
