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
long long gcd(long long a, long long b) {
  while (b != 0) {
    long long t = a % b;
    a = b;
    b = t;
  }
  return a;
}

//||--------------------------->||Main_Code_Start_From_Here||<---------------------------------||
vector<int>graph[300010];
int visit[300010];
int res;
int BFS(int source)
{
    res=0;
    queue<int>q;
    memset(visit,0,sizeof(visit));
    visit[source]=1;
    q.push(source);
    int cnt=0;
    while(!q.empty())
    {
        int u=q.front();
        rep(i,0,graph[u].size())
        {
            int v=graph[u][i];
            cnt++;
            if(!visit[v])
            {
                visit[v]=1;
                q.push(v);
            }
        }
        res++;
        q.pop();
    }
    return cnt;
}



int main()
{
    //freopen("a.in", "r", stdin);
    //freopen("a.out", "w", stdout);
  int tc,node,edge,t=1;
  cin>>tc;
  while(tc--)
  {
      cin>>node>>edge;
      int u,v;
      rep(i,0,edge)
      {
          cin>>u>>v;
          graph[u].push_back(v);
          graph[v].push_back(u);
      }
      int maximum=0;
      int ans;
      rep(i,1,node+1)
      {
          int cnt=BFS(i);
         // cout<<"node = "<<res<<" edge = "<<cnt<<endl;
          if(maximum<cnt)
          {
              maximum=cnt;
              ans=res;
          }
          else if(maximum==cnt)
          {
              ans=min(ans,res);
          }
          //cout<<"res = "<<res<<" i = "<<i<<endl;
         // maximum=max(maximum,res);
      }
      cout<<"Case "<<t++<<": "<<maximum/2<<" "<<ans<<endl;
      for(int i=1;i<node;i++)
      {
          graph[i].clear();
      }

  }

}
