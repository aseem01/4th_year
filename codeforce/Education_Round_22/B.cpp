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
   LL x,y,l,r;
   while(cin>>x>>y>>l>>r)
   {
       vector<LL>v;
       LL new1=1;
       for(LL i=0;i<=63;i++)
       {
           LL new2=1;
           for(LL j=0;j<63;j++)
           {

             if(new1+new2>=l && new1+new2<=r) v.push_back(new1+new2);
             if(new2>r/y) continue;
             new2*=y;

           }
           if(new1>r/x) continue;
           new1*=x;

       }
       v.push_back(l-1);
       v.push_back(r+1);
       sort(v.begin(),v.end());
       LL maximum=0;
       for(int i=1;i<v.size();i++)
       {
          cout<<"v[i] = "<<v[i]<<endl;
           //if(l<=v[i] && r>=v[i])
           maximum=max(maximum,(v[i]-v[i-1]-1));
       }
       cout<<maximum<<endl;
       //if(maximum==0) cout<<"0"<<endl;
       //else cout<<maximum<<endl;

   }

}

