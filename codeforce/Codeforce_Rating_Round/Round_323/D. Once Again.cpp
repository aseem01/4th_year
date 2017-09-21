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
int ar[300010],n;
int dp[300010],dir[300010];
int cnt;
int longest(int u)
{
    if(dp[u]!=-1) return dp[u];
    int maximum=0;
    for(int v=u+1;v<=cnt;v++)
    {
        if(ar[v]>=ar[u])
        {
            if(longest(v)>maximum)
            {
                maximum=longest(v);
                dir[u]=v;
            }
        }
    }
    dp[u]=1+maximum;
    return dp[u];
}
int main()
{
    //freopen("a.in", "r", stdin);
    //freopen("a.out", "w", stdout);
    int t;
    while(cin>>n>>t)
    {
        for(int i=1;i<=n;i++) cin>>ar[i];
        int lagbe;
        /*if(n==1) lagbe=t;
        else if(t>300) lagbe=300;
        else lagbe=t;
         cnt=n;*/
         lagbe=n*t;
         cnt=lagbe;
        for(int i=1;i<=lagbe;i++)
        {
            for(int j=1;j<=n;j++)
            {
                cnt++;
                ar[cnt]=ar[j];
            }
        }
        ar[0]=-10000;
        //for(int i=1;i<=n*t;i++) cout<<ar[i]<<" ";
        //cout<<endl;
        memset(dp,-1,sizeof(dp));
        memset(dir,-1,sizeof(dir));
        int LIS=0;
        for(int i=1;i<=n;i++)
        {
            if(longest(i)>LIS)
            {
                LIS=longest(i);
            }
        }
        cout<<LIS-1<<endl;
    }

}









