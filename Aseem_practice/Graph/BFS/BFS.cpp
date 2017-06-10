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
vector<vector<int> >adjacent[10001];
int visited[10001];
int distance[101];
int p[10001];
int last;
void BFS(int source,int destination)
{
    for(int i=0; i<destination; i++) visited[i]=0;
    queue<int>q;
    q.push(source);
    visited[source]=1;
    distance[source]=0;
    p[source]=s;
    while(!q.empty())
    {
        int u=q.front();
        q.pop();
        for(int i=0; i<adjacent[u].size(); i++)
        {
            if(visited[adjacent[u][i]]==0)
            {
                int v=adjacent[u][i];
                visited[v]=1;
                distance[v]=distance[u]+1;
                p[v]=u;
                q.push(v);
            }
        }
    }

    if(visited[last]==0) return;
    vector<int>path;
    path.push_back(last);
    int now=last;
    while(now!=source)
    {
        int keep=p[now];
        path.push_back(keep);
        now--;
    }

}
int main()
{
    //freopen("a.in", "r", stdin);
    //freopen("a.out", "w", stdout);
    int node,x,y,source,destination;
    while(cin>>node)
    {
        rep(i,0,n)
        {
            cin>>x>>y;
            adjacent[x].push_back(y);
            adjacent[y].push_back(x);
        }
        cin>>query;
        rep(i,0,query)
        {
            cin>>source>>destination;
            BFS(1,n);
            cout<<distance[destination]<<endl;

        }
    }


}
