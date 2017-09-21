//Belief yourself,Respect yourself
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
vector<int>graph[100010];
int visit[100010];
double prob[100010];
void BFS(int source)
{
  queue<int>q;
  q.push(source);
  visit[source]=1;
  int len;
  prob[source]=1.00;
  while(!q.empty())
  {
      int top=q.front();
      q.pop();
      rep(i,0,graph[top].size())
      {
          int v=graph[top][i];
          if(!visit[v])
          {
              visit[v]=1;
              if(top==1) len=graph[top].size();
              else len=graph[top].size()-1;
              prob[v]=prob[top]*1.00/(double(len));
              q.push(v);
          }
      }
  }
}
int main()
{
    //freopen("a.in", "r", stdin);
    //freopen("a.out", "w", stdout);
    int n,u,v;
    while(cin>>n)
    {
        rep(i,0,n-1)
        {
            cin>>u>>v;
            graph[u].push_back(v);
            graph[v].push_back(u);
        }
        BFS(1);
        double ans=0.0;
        rep(i,2,n+1) ans+=prob[i];
        cout<<fixed<<setprecision(12)<<ans<<endl;
        rep(i,1,n)
        {
            graph[i].clear();
            visit[i]=0;
            prob[i]=0;
        }
    }


}

