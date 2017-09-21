/****************************************************************************\
                       Belief yourself,Respect yourself                       |
                                                                              |
        /\           /--------|   |--------|  |--------|    ----       ----   |
       /  \         /             |           |             | \         / |   |
      /    \       |              |           |             |  \       /  |   |
     /      \      |----|         |--------|  |--------|    |   \     /   |   |
    /--------\          |------|  |           |             |    -----    |   |
   /          \                |  |           |             |             |   |
  /            \               /  |           |             |             |   |
----          ---- |----------/   |--------|  |--------|  ----          ----  |
                                                                              |
*****************************************************************************/
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

//Bit Operation
bool checkBit(LL n, int i) { return n&(1LL<<i); }  //AND
LL setBit(LL n, int i) { return n|(1LL<<i);; }     //OR
LL resetBit(LL n, int i) { return n&(~(1LL<<i)); } //OFF

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
const int mx=100010;
vector<int>graph[mx];
int visit[mx];
LL BFS(int source)
{
    memset(visit,0,sizeof(visit));
    visit[source]=1;
    map<int,int>mp;
    queue<int>q;
    q.push(source);
    LL cnt1=1;
    LL cnt2=0;
    mp[source]=1;
    while(!q.empty())
    {
        int top=q.front();
        q.pop();
        rep(i,0,graph[top].size())
        {
            int v=graph[top][i];
            if(!visit[v])
            {
                if(mp[top]==1) cnt2++,mp[v]=2;
                else if(mp[top]==2) cnt1++,mp[v]=1;
                visit[v]=1;
                //mp[v]=1;
                q.push(v);
                //cout<<"v = "<<v<<" mp[v] = "<<mp[v]<<endl;
            }
        }
    }
    //if(cnt1==0) cnt1=1;
    //if(cnt2==0) cnt2=1;
    //cout<<"cnt1 = "<<cnt1<<" cnt2 = "<<cnt2<<endl;
    return (cnt1*cnt2);
}
int main()
{
    //freopen("a.in", "r", stdin);
    //freopen("a.out", "w", stdout);
    int node,u,v;
    while(cin>>node)
    {
        rep(i,0,node-1)
        {
            cin>>u>>v;
            graph[u].push_back(v);
            graph[v].push_back(u);
        }
        LL res=BFS(1);
        cout<<res-(node-1)<<endl;
        rep(i,0,node) graph[i].clear();
    }


}









