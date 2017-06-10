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
double area(double height,double base)
{
    double ret=0.5*height*base;
    return ret;
}
int main()
{
    //freopen("a.in", "r", stdin);
    //freopen("a.out", "w", stdout);
     int n,h;
     while(cin>>n>>h)
     {
         double total,part,ans;
         total=area(h,1.0);
         part=total/n;
         double keep=part;
         rep(i,0,n-1)
         {   ans=0;
             double startbase,endbase,startheight,endheight,midbase,midheight,midarea;
             int k=100;
             startbase=0.00,endbase=1.00;
             startheight=0.00,endheight=h;
             while(k--)
             {
                 midbase=(startbase+endbase)/2.00;
                 midheight=(startheight+endheight)/2.00;
                 midarea=area(midheight,midbase);
                 /*cout<<"midbase = "<<midbase<<endl;
                 cout<<"midheight = "<<midheight<<endl;
                 cout<<"midarea = "<<midarea<<endl;*/
                 ans=midheight;
                 if(midarea<=keep)
                 {
                    startbase=midbase;
                    startheight=midheight;
                 }
                 else
                 {
                     endbase=midbase;
                     endheight=midheight;
                 }
             }
             cout<<fixed<<setprecision(16)<<ans<<" ";
             keep+=part;
         }
         cout<<endl;
     }

}

