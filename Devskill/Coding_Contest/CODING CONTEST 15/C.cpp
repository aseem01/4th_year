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
LL br[110010];
int Binary_search(int need,int day)
{
    int mid,high,low;
    low=1;
    high=day;
    while(low<=high)
    {
        mid=(low+high)/2;
        if(br[mid]>=need && br[mid-1]<=need)
        {
            if(br[mid-1]==need) return mid-1;
            else return mid;
        }
        if(br[mid]>need)
        {
           high=mid-1;
        }
        else
        {
            low=mid+1;
        }
    }
}

int main()
{
    //freopen("a.in", "r", stdin);
    //freopen("a.out", "w", stdout);
    LL test,day,query,ar[100010],need;
    cin>>test;
    while(test--)
    {
        cin>>day>>query;
        br[0]=0;
        rep(i,1,day+1)
        {
            cin>>ar[i];
            br[i]=br[i-1]+ar[i];
        }
        while(query--)
        {
            cin>>need;
            if(br[day]<need) cout<<"-1"<<endl;
            else cout<<Binary_search(need,day)<<endl;
        }
    }

}
