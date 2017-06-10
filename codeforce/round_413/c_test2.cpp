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
long long int x[2000010],y[2000010];
int main()
{
    //freopen("a.in", "r", stdin);
    //freopen("a.out", "w", stdout);
    int n,c,d;
 while(cin>>n>>c>>d)
 {
     int bakicoin,bakidimon;
     int pos=-1;
     char z,check;
     int value;
     int sum=-1;
     int flag=0;
     for(int i=0;i<n;i++)
     {
         cin>>x[i]>>y[i]>>z;
         if(y[i]<=c || y[i]<=d)
         {
             if(sum<x[i])
             {
             if(z=='C')
             {
                 if(c>=y[i])
                 {
                 bakicoin=c-y[i];
                 flag=1;
                 }
             }
             if(z=='D')
             {
                 if(d>=y[i])
                 {
                 bakidimon=d-y[i];
                 flag=1;
                 }
             }
             if(flag)
             {
             sum=x[i];
             pos=i;
             check=z;
             }
             }
         }
     }
     cout<<"sum = "<<sum<<endl;
     x[pos]=-1;
     if(check=='C') bakicoin=bakicoin;
     else bakicoin=c;
     if(check=='D') bakidimon=bakidimon;
     else bakidimon=d;
     cout<<"bakicoin = "<<bakicoin<<endl;
     cout<<"bakidimon = "<<bakidimon<<endl;
     int sum1=-1;
     int flag1=0;
     for(int i=0;i<n;i++)
     {
         //cout<<"x[i] = "<<x[i]<<" y[i] = "<<y[i]<<endl;
         if(((y[i]<=bakicoin) && x[i]!=-1) ||((y[i]<=bakidimon) && x[i]!=-1))
         {
             if(sum1<x[i])
             {
                 sum1=x[i];
             if(z=='C')
             {
                 if(bakicoin>=y[i])
                 {
                bakicoin=bakicoin-y[i];
                flag1=1;
                 }
             }
             if(z=='D')
             {
                 if(bakicoin>=y[i])
                 {
                 bakidimon=bakidimon-y[i];
                 flag1=1;
                 }
             }
             if(flag1) sum1=x[i];
             }
         }
     }
     cout<<"sum1 = "<<sum1<<endl;
     if(sum!=-1 && sum1!=-1) cout<<sum+sum1<<endl;
     else cout<<"0"<<endl;

 }


}

