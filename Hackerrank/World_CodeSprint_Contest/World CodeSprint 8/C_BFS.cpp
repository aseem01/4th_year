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

//||--------------------------->||Main_Code_Start_From_Here||<---------------------------------||
const int MXX=200001;
int visited[MXX];
int adjacent[MXX];
vector<int>graph[MXX];
int BFS(int source)
{
    int cnt=1;
    queue<int>Q;
    Q.push(source);
    visited[source]=1;
    while(!Q.empty())
    {
        int top=Q.front();
        Q.pop();
        for(int i=0; i<graph[top].size(); i++)
        {
            int u=graph[top][i];
            if(!visited[u])
            {
                cnt++;
                visited[u]=1;
                Q.push(u);
            }
        }
    }
    return cnt;
}
int main()
{
    //freopen("a.in", "r", stdin);
    //freopen("a.out", "w", stdout);
    LL n,conection,library_cost,road_cost,test,a,b;
    cin>>test;
    while(test--)
    {
        cin>>n>>conection>>library_cost>>road_cost;
        rep(i,0,conection)
        {
            cin>>a>>b;
            graph[a].push_back(b);
            graph[b].push_back(a);
        }

        LL ans=0;

        rep(i,1,n+1)
        {
            if(!visited[i])
            {
                LL value=BFS(i);
                if(road_cost>=library_cost)
                {
                    ans=n*library_cost;
                    break;
                }
                else
                {
                    ans += library_cost;
                    ans += (road_cost)*(value-1);
                }
            }
        }

        cout<<ans<<endl;
        memset(visited,0,sizeof(visited));
        memset(graph,0,sizeof(graph));
    }
}
