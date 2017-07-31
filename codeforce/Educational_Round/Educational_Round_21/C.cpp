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
   int n,w,ar[201],ans[201];
   while(cin>>n>>w)
   {
       vector<pair<int,int> > v;
       int total=0;
     rep(i,0,n)
     {
         cin>>ar[i];
         v.push_back(make_pair(ar[i],i));
     }
     sort(v.begin(),v.end());
     rep(i,0,n)
     {
         ans[i]=ar[i]/2;
         if(ar[i]%2) ans[i]++;
         total+=ans[i];
     }
     cout<<"total = "<<total<<endl;
     if(total>w) cout<<"-1";
     else
     {
       w-=total;
       for(int i=0;i<n && w>0;i++)
       {
           int tem1=v[i].second;
           int res=ar[tem1]-ans[tem1];
           if(res<=w)
           {
               ans[tem1]+=res;
               w-=res;
           }
           else
           {
               ans[tem1]+=w;
               w=0;
           }
       }
       rep(i,0,i++) cout<<ans[i]<<" ";
     }
     cout<<endl;

   }

}

