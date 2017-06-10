#include<bits/stdc++.h>

using namespace std;

#define ll long long int
#define fo(i,b,n) for(int i=(b); i<(n) ; i++)
#define xx first
#define yy second
#define pb push_back
#define sz(n) int(n.size())

#define pii pair
#define MP make_pair

#define tp tuple
#define MT make_tuple
#define gt(x,y) get<x>(y)

#define read(x) scanf("%d",&x)
#define read2(x,y) scanf("%d%d",&x,&y)
#define readl(x) scanf("%lld",&x)
#define readl2(x,y) scanf("%lld%lld",&x,&y)
#define readd(x) scanf("%lf",&x)
#define readd2(x,y) scanf("%lf%lf",&x,&y)

#define pr(n) printf("%d",n)
#define prn(n) printf("%d\n",n)
#define prl(n) printf("%lld",n)
#define prln(n) printf("%lld\n",n)
#define prd(x) printf("%lf",x)
#define prdn(x) printf("%lf\n",x)

#define TC(n) printf("Case %d: ",n)
/**********************************/
const int N=100005;
vector< int >g[N];
int n,m,lib,r;
int vis[N];

int bfs(int st)
{
    vis[st]=1;
    queue<int>q;
    q.push(st);
    int cnt=1;

    while( !q.empty() )
    {
        int top=q.front();
        q.pop();
        for(int i=0;i<g[top].size();i++)
       {
           int v = g[top][i];
            if(!vis[v]){
                vis[v]=1;
                cnt++;
                q.push(v);
            }
        }
    }
    return cnt;
}


int main()
{
    int q;
    read(q);
    while(q--)
    {
        read2(n,m),read2(lib,r);
        fo(i,0,m){
            int x,y;
            read2(x,y);
            g[x].pb(y),g[y].pb(x);
        }

        ll ans=0;

        fo(i,1,n+1)
        {
            if(!vis[i])
            {

                int val=bfs(i);
                cout<<"value = "<<val<<endl;
                val=(ll)val;
                ll mi=999999999999999;
                for(int i=1;i<=val;i++)
                {
                    ll temp=(i*(ll)lib) + (val-i) * (ll) r ;
                    //cout<<"temp = "<<temp<<endl;
                    mi=min(mi,temp);
                }
                ans+=mi;
            }
        }

        prln(ans);

        fo(i,0,N){
            g[i].clear();
            vis[i]=0;
        }


    }

    return 0;
}





