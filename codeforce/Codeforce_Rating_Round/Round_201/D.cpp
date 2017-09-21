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
string dp[5010];
int main()
{
   string s1,s2;
   while(getline(cin,s1))
   {
       getline(cin,s2);
       int len1=s1.length();
       int len2=s2.length();
       memset(dp,0,sizeof(dp));
       for(int i=1;i<=len1;i++)
       {
           for(int j=1;j<=len2;j++)
           {
               if(s1[i-1]==s2[j-1])
               {
                   dp[i][j]=dp[i-1][j-1]+s1[i-1];
               }
               else
               {
                   int tmp1=dp[i-1][j].size();
                   int tmp2=dp[i][j-1].size();
                   if(tmp1>tmp2) dp[i][j]=dp[i-1][j];
                   else dp[i][j]=dp[i][j-1];
                   //dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
               }
           }
       }
       cout<<dp[len1][len2]<<endl;
      //printf("%d\n",dp[len1][len2]);
   }
}

