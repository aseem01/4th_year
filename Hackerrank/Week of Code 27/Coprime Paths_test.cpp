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
#define inf 1<<28
vector <int> G[50001];
int dist[50001];
int parent[50001];
int distance[50001];
bool visit[50001];
map<int,int>mp;
void BFS(int source, int destination)
{
    queue <int> Q;
    memset(visit,0,sizeof(visit));
    Q.push(source);
    visit[source] = true;

    while(!Q.empty())
    {
        int u = Q.front();
        Q.pop();
        for(size_t i=0; i<G[u].size(); i++)
        {
            int v = G[u][i];

            while(!visit[v])
            {
                visit[v] = true;
                parent[v] = u;
                Q.push(v);
            }
        }
    }
    vector<int>v;

    v.push_back(source);
    while(destination!=source)
    {
        v.push_back(destination);
        destination = parent[destination];
    }
    int cnt=0;
    for(int i=0; i<v.size(); i++)
    {
        for(int j=i+1; j<v.size(); j++)
        {
            if(__gcd(mp[v[i]],mp[v[j]])==1) cnt++;
        }
    }
    cout<<cnt<<endl;
    v.clear();


}


int main()
{
    int node,edge,value;
    while(cin>>node>>edge)
    {
        for(int i=0; i<node; i++)
        {
            cin>>value;
            mp[i+1]=value;
        }
        for(int i=0; i<edge; i++)
        {
            int x,y;
            cin>> x >> y;
            G[x].push_back(y);
            G[y].push_back(x);
        }

        int s,d;

        rep(i,0,node-1)
        {
            cin>> s>> d;
            BFS(s,d);

        }
        //mp.clear();

    }
}
