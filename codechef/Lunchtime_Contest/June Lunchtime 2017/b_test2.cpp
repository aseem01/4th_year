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
const int mx =1000010;
LL c[mx],w[mx],ar[mx];
int main()
{
    //freopen("a.in", "r", stdin);
    //freopen("a.out", "w", stdout);
    int tc,n;
    cin>>tc;
    while(tc--)
    {
        cin>>n;
        rep(i,1,n+1) cin>>c[i];
        rep(i,1,n+1) cin>>w[i];
        //partial sum;
        rep(i,1,n+1) w[i]=w[i-1]+w[i];
        LL maximum=0;
        LL last_duplicate=0;
        memset(ar,0,sizeof(ar));
        rep(i,1,n+1)
        {
            if(ar[c[i]]==0)
            {
                ar[c[i]]=i;
            }
            else
            {
                maximum=max(maximum,w[i-1]-w[last_duplicate]);
                last_duplicate=max(ar[c[i]],last_duplicate);
                cout<<"last_duplicate = "<<last_duplicate<<endl;
                cout<<"maximum = "<<maximum<<endl;
                ar[c[i]]=i;
            }
        }
        maximum=max(maximum,w[n]-w[last_duplicate]);
        cout<<maximum<<endl;
    }

}
