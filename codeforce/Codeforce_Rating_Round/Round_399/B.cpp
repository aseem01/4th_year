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
long long gcd(long long a, long long b)
{
    while (b != 0)
    {
        long long t = a % b;
        a = b;
        b = t;
    }
    return a;
}

//||--------------------------->||Main_Code_Start_From_Here||<---------------------------------||
LL ar[100];
int main()
{
    //freopen("a.in", "r", stdin);
    //freopen("a.out", "w", stdout);
    ar[1] = 1;
    rep(i,2,56) ar[i]=ar[i-1]*2+1;
    LL n, r, l;
    cin>>n>>l>>r;
    LL temp = n;
    LL idx = 2;
    while(temp>1)
    {
        idx++;
        temp/=2;
    }
    LL total = 0;
    for(LL i=l; i<=r; i++)
    {
        int cnt=50;
        LL low=1,high=ar[idx-1],mid;
        LL ret = 0;
        temp = n;
        while(cnt--)
        {
            mid=(low+high)/2;
            if(mid==i)
            {
                ret=temp%2;
                break;
            }
            else if(i<mid) high=mid-1;
            else low=mid+1;
            temp=temp/2;
        }
        total=total+ret;
    }
    cout<<total<<endl;

}
