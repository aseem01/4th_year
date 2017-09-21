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
int main()
{
    //freopen("a.in", "r", stdin);
    //freopen("a.out", "w", stdout);
    int test,n,ar[101],br[101],cr[101],value;
    cin>>test;
    while(test--)
    {
        cin>>n;
        rep(i,1,n+1) cin>>ar[i];
        int keep;
        if(n%2) keep=n/2+1;
        else keep=n/2;
        int k=0;
        int flag=0;
        map<int,int>mp;
        for(int i=1;i<=keep;i++)
        {
            if(ar[i]!=ar[n-i+1] || ar[i]>7 || ar[n-i+1]>7) flag=1;
            mp[ar[i]]++;
            k+=2;
        }
        if(n%2) k--;
        //cout<<"n = "<<n<<" k = "<<k<<endl;
        if(n!=k)flag=1;
         for(int i=1;i<=7;i++)
         {
             if(mp[i]==0) flag=1;
         }
        if(flag) cout<<"no"<<endl;
        else cout<<"yes"<<endl;


    }

}

