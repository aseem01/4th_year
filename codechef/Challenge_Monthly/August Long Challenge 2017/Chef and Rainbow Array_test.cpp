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
    int test,n,ar[1001];
    cin>>test;
    while(test--)
    {
        cin>>n;
        rep(i,0,n) cin>>ar[i];
        int temp=1;
        int flg=1;
        int ans=0;
        int keep;
        int cnt=0;

        int i=0;
        n--;
        while(i<=n&&ar[i]==1&&ar[n]==1)
        {
            cnt++;
            i++;
            n--;
        }

        //cout<<cnt<<endl;
        if(cnt==0) flg=0;
        cnt=0;

        while(i<=n&&ar[i]==2&&ar[n]==2)
        {
            cnt++;
            i++;
            n--;
        }
        if(cnt==0) flg=0;
        cnt=0;

        while(i<=n&&ar[i]==3&&ar[n]==3)
        {
            cnt++;
            i++;
            n--;
        }
        if(cnt==0) flg=0;
        cnt=0;

        while(i<=n&&ar[i]==4&&ar[n]==4)
        {
            cnt++;
            i++;
            n--;
        }
        if(cnt==0) flg=0;
        cnt=0;

        while(i<=n&&ar[i]==5&&ar[n]==5)
        {
            cnt++;
            i++;
            n--;
        }
        if(cnt==0) flg=0;
        cnt=0;

        while(i<=n&&ar[i]==6&&ar[n]==6)
        {
            cnt++;
            i++;
            n--;
        }
        if(cnt==0) flg=0;
        cnt=0;

        while(i<=n&&ar[i]==7&&ar[n]==7)
        {
            cnt++;
            i++;
            n--;
        }

        if(cnt==0||i<n) flg=0;
        //cnt=0;

        if(flg==0) cout<<"no"<<endl;
        else cout<<"yes"<<endl;

    }

}

