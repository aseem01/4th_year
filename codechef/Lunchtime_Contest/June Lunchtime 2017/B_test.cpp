#include<bits/stdc++.h>
#define maxn 1000005
#define ll long long
using namespace std;
int c[maxn];
ll ans=0,curr;
ll w[maxn];
int d[maxn];

ll maxi(ll a, ll b)
{
    if(a>b)
    return a;
    return b;
}

int main()
{
    int t,n;
    scanf("%d",&t);
    while(t--)
    {
        curr=0;
        memset(d,0,sizeof d);
        ans=0;
        scanf("%d",&n);
        for(int i=1;i<=n;i++)
        scanf("%d",&c[i]);
        for(int i=1;i<=n;i++)
        scanf("%lld",&w[i]);
        int l=1;
        for(int i=1;i<=n;i++)
        {
            d[c[i]]++;
            if(d[c[i]]>1)
            {
                curr-=w[l];
                d[c[l]]--;
                d[c[i]]--;
                l++;
                i--;
                cout<<"curr = "<<curr<<endl;
                ans=maxi(ans,curr);
                continue;
            }
            else
            curr+=w[i];
            ans=max(ans,curr);
        }
        printf("%lld\n",ans);
    }
}
