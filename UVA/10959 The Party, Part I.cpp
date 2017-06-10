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
#define ULL unsigned long long
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
#define  M 2000001
vector<int>graph[M];
LL visited[M];
void BFS(int source,int destination)
{
    vector<pair<int,int> >v;
    memset(visited,0,sizeof(visited));
    map<int,int>mp;
    queue<int>Q;
    visited[source]=1;
    mp[source]=0;
    Q.push(source);
    while(!Q.empty())
    {
        int top=Q.front();
        //cout<<"top = "<<top<<endl;
        Q.pop();
        for(int i=0; i<graph[top].size(); i++)
        {
            int u=graph[top][i];
            //cout<<"uu = "<<u<<endl;
            if(!visited[u])
            {
                mp[u]=mp[top]+1;
                //cout<<"u = "<<u<<" mp[u] = "<<mp[u]<<endl;
                v.push_back(make_pair(u,mp[u]));
                visited[u]=1;
                Q.push(u);
            }
        }
    }
    sort(v.begin(),v.end());

    rep(j,0,destination)
    {
        cout<<v[j].second<<endl;
    }
    v.clear();
}
int main()
{
    //freopen("a.in", "r", stdin);
    //freopen("a.out", "w", stdout);
    int test,node,connection,u,v;
    cin>>test;
    while(test--)
    {

        cin>>node>>connection;

        rep(i,0,connection)
        {
            cin>>u>>v;
            graph[u].push_back(v);
            graph[v].push_back(u);
        }
        BFS(0,node-1);
        if(test) cout<<endl;
        for(int i=0; i<99900; i++)
            graph[i].clear();

    }


}