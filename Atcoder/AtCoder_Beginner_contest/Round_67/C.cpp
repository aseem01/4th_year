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
int n,ar[300010],a;
int main()
{
    //freopen("a.in", "r", stdin);
    //freopen("a.out", "w", stdout);

   while(cin>>n)
   {
       rep(i,0,n)
       {
           cin>>a;
           if(a<0) ar[i]=(-1)*a;
           else ar[i]=a;
       }
       sort(ar,ar+n);
       int k=2;
       LL temp1=ar[0];
       LL temp2=ar[n-1];
       LL prefix=temp1;
       LL suffix=temp2;
       int t=2;
       for(int i=1;i<n;)
       {
           if(k==n) break;
          if(temp1<temp2)
          {

                temp1+=ar[i];
                i++;

          }
          else
          {

              temp2+=ar[n-t];
              t++;
          }
          k++;
          //cout<<"tempp1 = "<<temp1<<" tempp2 = "<<temp2<<endl;

       }
       //cout<<"temp1 = "<<temp1<<" temp2 = "<<temp2<<endl;
       cout<<abs(temp1-temp2)<<endl;
   }

}

