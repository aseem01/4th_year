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
#define rep(i,intial,n) for(int i=intial; i<(n) ; i++)
#define REP(i,intial,n) for(int i=intial; i<=(n) ; i++)
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
long long gcd(long long a, long long b)
{
    while (b != 0)
    {
        long long t = a % b;
        a = b;
        b = t;
    }
    return a;
}

//||--------------------------->||Main_Code_Start_From_Here||<---------------------------------||

#define inf 1<<28
vector <int> G[800010];
LL dist[800010];
LL distance[800010];
bool visit[800010];
LL cost[800010];
LL BFS(LL source, LL destination)
{
    queue <LL> Q;
    memset(dist,0,sizeof(dist));
    Q.push(source);
    dist[source] = 0;
    visit[source] = true;

    while(!Q.empty())
    {
        LL u = Q.front();
        Q.pop();
        for(size_t i=0; i<G[u].size(); i++)
        {
            LL v = G[u][i];

            while(!visit[v])
            {
                dist[v] = dist[u] + 1;
                visit[v] = true;
                Q.push(v);
            }
        }
    }
    return dist[destination];
}


int main()
{
    //freopen("a.in", "r", stdin);
    //freopen("a.out", "w", stdout);


    LL node,road,edge,test,t=1;
    cin>>test;
    while(test--)
    {
        cin>>road>>node;
        rep(i,0,node) cin>>cost[i];
        rep(i,0,road)
        {
            int x,y;
            cin>> x >> y;
            G[x].push_back(y);
            G[y].push_back(x);
        }
        LL s,d;
        cin>> s>> d;

        LL keep=BFS(s,d);
        //cout<<"keep = "<<keep<<endl;
        if(road==0 || node==0) cout<<"Case "<<t++<<": Path not found"<<endl;
        else if(s==d) cout<<"Case "<<t++<<": "<<cost[d-1]<<endl;
        else if(keep==0) cout<<"Case "<<t++<<": Path not found"<<endl;
        else if(cost[d-1]<=keep) cout<<"Case "<<t++<<": Don't travel"<<endl;
        else cout<<"Case "<<t++<<": "<<cost[d-1]-keep<<endl;
        rep(i,0,800010)
        {
            G[i].clear();
            visit[i]=0;
            //dist[i]=0;
            //cost[i]=0;
        }
        if(test) cout<<endl;
    }


}
