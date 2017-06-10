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
int main()
{
    //freopen("a.in", "r", stdin);
    //freopen("a.out", "w", stdout);
    string s1,s2;
    while(cin>>s1>>s2)
    {
        int n=s1.size();
        if(s1.size()!=s2.size())
        {
            cout<<"NO"<<endl;
            continue;
        }
      if(n%2)
      {
          cout<<"NO"<<endl;
          continue;
      }
      string s1Left,s1Right,s2Left,s2Right;
      s1Left="";
      s1Right="";
      s2Left="";
      s2Right="";
      rep(i,0,n/2) s1Left+=s1[i];
      rep(i,n/2,n) s1Right+=s1[i];

      rep(i,0,n/2) s2Left+=s2[i];
      rep(i,n/2,n) s2Right+=s2[i];

      sort(s1Left.begin(),s1Left.end());
      sort(s1Right.begin(),s1Right.end());
      sort(s2Left.begin(),s2Left.end());
      sort(s2Right.begin(),s2Right.end());
      if((s1Left==s2Left && s1Right==s2Right) || (s1Left==s2Right && s1Right==s2Left)) cout<<"YES"<<endl;
      else cout<<"NO"<<endl;

    }

}

