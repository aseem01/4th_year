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
    int m,n,a,b;
    while(cin>>m)
    {
        vector<pair<int,int> >v,vv,vvv,vvvv;
        rep(i,0,m)
        {
            cin>>a>>b;
            v.push_back(make_pair(b,a));
            vvvv.push_back(make_pair(a,b));

        }
        sort(v.begin(),v.end());
        sort(vvvv.begin(),vvvv.end());
        cin>>n;
        rep(i,0,n)
        {
            cin>>a>>b;
            vv.push_back(make_pair(a,b));
            vvv.push_back(make_pair(b,a));
        }
        sort(vv.begin(),vv.end());
        sort(vvv.begin(),vvv.end());
        int ans=vv[vv.size()-1].first-v[0].first;
        int res=vvvv[vvvv.size()-1].first-vvv[0].first;
        //cout<<"ans = "<<ans<<" res = "<<res<<endl;
        int maximum=max(ans,res);
        if(maximum<=0) cout<<"0"<<endl;
        else cout<<maximum<<endl;
    }

}
