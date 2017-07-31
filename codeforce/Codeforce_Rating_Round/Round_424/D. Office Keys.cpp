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
#define MX 1000000000
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
LL n,k,p;
LL dp[1001][1001];
LL ar[10010],br[10010];
LL maximum=1000000000000;
LL go(LL pos,LL key)
{
    if(pos==n) return 0;
    if(key==k) return maximum;
    if(dp[pos][key]!=-1) return dp[pos][key];
    LL first=max(abs(br[key]-ar[pos])+abs(p-br[key]),go(pos+1,key+1));
    LL second=go(pos,key+1);
    //cout<<"first = "<<first<<" second = "<<second<<endl;
    return dp[pos][key]=min(first,second);
}
int main()
{
    //freopen("a.in", "r", stdin);
    //freopen("a.out", "w", stdout);
    while(cin>>n>>k>>p)
    {
        rep(i,0,n) cin>>ar[i];
        rep(i,0,k) cin>>br[i];
        sort(ar,ar+n);
        sort(br,br+k);
        memset(dp,-1,sizeof(dp));
        cout<<go(0,0)<<endl;
    }

}
