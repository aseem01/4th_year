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
const int M=200010;
vector<int>graph[M];
int visited[M];
int BFS(int source,int ttl)
{
    //cout<<"source = "<<source<<" ttl = "<<ttl<<endl;
    map<int,int>mp;
    //memset(visited,0,sizeof(visited));
    //mp.clear();
    int cnt=0;
    queue<int>Q;
    visited[source]=1;
    Q.push(source);
    mp[source]=0;
    int cnt1=0;
    while(!Q.empty())
    {
        int top=Q.front();
        //cout<<"top    =   "<<top<<endl;
        Q.pop();
        for(int i=0;i<graph[top].size();i++)
        {
           int u=graph[top][i];
          // cout<<"                      u = "<<u<<" grapg = "<<graph[top].size()<<endl;
           if(!visited[u])
           {
               mp[u]=mp[top]+1;
              // cout<<"mp[u] = "<<mp[u]<<endl;
               if(mp[u]>ttl) break;
               cnt++;
               //cout<<"                   cnt = "<<cnt<<endl;
               visited[u]=1;
               Q.push(u);
           }
          // cnt1++;
           //if(cnt1>10) return 0;
        }
    }
    return cnt+1;
}
int main()
{
    //freopen("a.in", "r", stdin);
    //freopen("a.out", "w", stdout);
    int n,start,ttl,u,v,cnt,t=1;
    while(cin>>n)
    {
        if(n==0) break;
        map<int,int>mp1;
        cnt=0;
        rep(i,0,n)
        {
            cin>>u>>v;
            graph[u].push_back(v);
            graph[v].push_back(u);
            //cnt=0;
            if(mp1[u]==0)
            {
                cnt++;
                mp1[u]=1;
            }
            if(mp1[v]==0)
            {
                cnt++;
                mp1[v]=1;
            }
        }
        //cout<<cnt<<endl;
        while(true)
        {
            cin>>start>>ttl;
            if(start==0 && ttl==0) break;
            int value=BFS(start,ttl);
            //cout<<"value = "<<value<<endl;
            //cout<<"Case "<<t++<<": "<<cnt-value<<"  nodes not reachable from node "<<start<<" with TTL = "<<ttl<<"."<<endl;
            cout<<"Case "<<t++<<": "<<cnt-value<<" "<<"nodes not reachable from node "<<start<<" with TTL = "<<ttl<<"."<<endl;
            memset(visited,0,sizeof(visited));
        }
        //cout<<endl;
        for(int i=0;i<99900;i++)
        graph[i].clear();
        //graph.clear();
    }


}
