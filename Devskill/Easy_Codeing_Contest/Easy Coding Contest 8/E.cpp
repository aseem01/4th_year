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
#define AND(a,b) ((a) & (b))
#define OR(a,b) ((a)|(b))
#define XOR(a,b) ((a) ^ (b))
#define MP make_pair
#define sqr(x) ((x)*(x))
#define sqrt(x) sqrt(1.0*(x))
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

template<typename T> T BigMod(T b,T p,T m) //BigMod Calculation
{
    T r=1;
    while(p)
    {
        if(p&1)r=(r*b)%m;
        b=(b*b)%m;
        p>>=1;
    }
    return r;
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
LL m=1000000007;

//||--------------------------->||Main_Code_Start_From_Here||<---------------------------------||
LL big_mod(LL n, LL p)
{
    if(p==0) return 1;

    if(!(p&1))
    {
        LL r = big_mod(n,p/2) % m;

        return ( (r%m) * (r%m) ) % m;
    }

    else
    {
        return ( ( n%m) * (big_mod(n,p-1) %m)) % m;
    }
}

int main()
{
    //freopen("a.in", "r", stdin);
    //freopen("a.out", "w", stdout);
    LL t,n;
    cin>>t;
    LL ans=0;
    while(t--)
    {
        cin>>n;
        if(n==1)
        {
            cout<<26<<endl;
            continue;
        }
        else if(n==2)
        {
            cout<<(26*26)%MOD<<endl;
            continue;
        }


        if(n%2==0)
        {
            n-=2;
            n-=2;
            ans=big_mod(52,n);

            ans=(big_mod(26,4)*ans)%MOD;
        }
        else
        {
            n-=1;
            n-=2;
            ans=big_mod(52,n);
            ans=(big_mod(26,3)*ans)%MOD;
        }
        cout<<ans<<endl;
    }
}
