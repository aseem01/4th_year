//----->|try=0; while(!success) try++;|<------
//----->|Belief Yourself,Respect Yourself|<----
//----->|Be Proud Of Yourself,You're Doing Your best|<-----
#include<bits/stdc++.h>
using namespace std;
#define uniq(x)  x.erase(unique(x.begin(),x.end()), x.end()) //Unique value find from vector
#define upper(arr,n,fixed) upper_bound(arr,arr+n,fixed)-arr  //Upper value search;
#define lower(arr,n,fixed) upper_bound(arr,arr+n,fixed)-arr  //Lower value search;
#define max3(a,b,c) max(max(a,b),c)//maximum value find three value;
#define min3(a,b,c) min(min(a,b),c)//minimum value find three value;
#define rep(i, n) for(int i = 0; i < n; ++i)
#define REP(i, n) for(int i = 1; i <= n; ++i)
#define rep1(i,start,n) for(int i=start;i<n;++i)
#define PI acos(-1.0)//PI Calculation
#define LL long long
#define AND(a,b) ((a) & (b))
#define OR(a,b) ((a)|(b))
#define XOR(a,b) ((a) ^ (b))
#define MP make_pair
#define sqr(x) ((x)*(x))
#define sqrt(x) sqrt(1.0*(x))
#define INF_MAX 2147483647
#define INF_MIN -2147483647
#define MX 1000005
#define MOD 1000000007
template<typename T> T POW(T b,T p)          //Pow calculation
{
    T r=1;
    while(p)
    {
        if(p&1)r=(r*b);
        b=(b*b);
        p>>=1;
    }
    return r;
}

template<typename T> T BigMod(T b,T p,T m) //BigMod Calculation
{
    T r=1;
    while(p)
    {
        if(p&1)r=(r*b)%m;
        b=(b*b)%m;
        p>>=1;
    }
    return r;
}

//||--------------------------->||Main_Code_Start_From_Here||<---------------------------------||
struct data
{
    int w,u;
    data(int a,int b)
    {
        u=a;
        w=b;
    }
    bool operator<(const data& p) const
    {
        return w>p.w;
    }
};
int par[MX];
int dist[MX];
vector<pair<int,int> > adj[MX];
int dijkstra(int start,int desti,int end)
{
    rep(i,end) dist[i]=INF_MAX;
    memset(par,-1,sizeof(par));
    dist[start]=0;
    priority_queue<data>q;
    q.push(data(start,0));
    while(!q.empty())
    {
        int u=q.top().u;
        int w=q.top().w;
        q.pop();
        if(u==desti) return dist[desti];
        for(int i=0;i<adj[u].size();i++)
        {
            int v=adj[u][i].first;
            int sec=adj[u][i].second;
            if(dist[v]>w+sec)
            {
                par[v]=v;
                dist[v]=w+sec;
                q.push(data(v,dist[v]));
            }
        }
    }
    return INF_MAX;
}
int main()
{
    //freopen("a.in", "r", stdin);
    //freopen("a.out", "w", stdout);
    int test,m,n,start,end,u1,u2,w,t=1;
    cin>>test;
    while(test--)
    {
        cin>>m>>n>>start>>end;
        rep(i,m) adj[i].clear();
        rep(i,n)
        {
            cin>>u1>>u2>>w;
            adj[u1].push_back(make_pair(u2,w));
            adj[u2].push_back(make_pair(u1,w));
        }
        int res=dijkstra(start,end,m);
        if(res==INF_MAX) cout<<"Case #"<<t++<<": unreachable"<<endl;
        else cout<<"Case #"<<t++<<": "<<res<<endl;
    }

}

