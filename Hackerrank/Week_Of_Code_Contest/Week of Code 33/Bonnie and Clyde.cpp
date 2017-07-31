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
#define MP make_pair
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

LL big_mod(LL n, LL p)
{
    if(p==0) return 1;
    if(!(p&1))
    {
        LL r = big_mod(n,p/2) % MOD;
        return ( (r%MOD) * (r%MOD) ) % MOD;
    }
    else return ( ( n%MOD) * (big_mod(n,p-1) %MOD)) % MOD;
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

vector<int>graph[201000];
int parent[201000];
int visit[201000];
int BFS(int source,int destination)
{
    queue<int>Q;
    memset(visit,0,sizeof(visit));
    Q.push(source);
    visit[source]=1;
    while(!Q.empty())
    {
        int u=Q.front();
        Q.pop();
        rep(i,0,graph[u].size())
        {
            int v=graph[u][i];
            while(!visit[v])
            {
                visit[v]=1;
                parent[v]=u;
                Q.push(v);
            }
        }
    }
    return true;
}

int main()
{
    //freopen("a.in", "r", stdin);
    //freopen("a.out", "w", stdout);
    int node,edge,query,u,v,a,b,target;
    while(cin>>node>>edge>>query)
    {
        rep(i,0,edge)
        {
            cin>>u>>v;
            graph[u].push_back(v);
            graph[v].push_back(u);
        }

        rep(i,0,query)
        {
            cin>>a>>b>>target;
            int target2=target;
           // BFS(a,target);
            if(i==0)
            cout<<"NO"<<endl;
            else cout<<"YES"<<endl;
            /*map<int,int>mp;
            mp[a]++;
            while(target!=a)
            {
                if(mp[target]==0 && target!=target2)
                mp[target]++;
                target=parent[target];
            }
            BFS(b,target2);
            if(mp[b]==1) cout<<"NO"<<endl;
            else
            {
                int flag=0;
                int temp=target2;
                while(target2!=b)
                {
                    if(mp[target2]==1 && target2!=temp)
                    {
                        flag=1;
                        break;
                    }
                    target2=parent[target2];
                }
                if(!flag) cout<<"YES"<<endl;
                else cout<<"NO"<<endl;
            }*/

        }

    }

}

