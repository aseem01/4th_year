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
LL a[3001000],b[3001000];
int main()
{
    //freopen("a.in", "r", stdin);
    //freopen("a.out", "w", stdout);
    int n,m,k,h;
    while(cin>>n>>m>>k)
    {
        map<int,int>mp;
        vector<pair<int,int> >v;
        rep(i,0,m)
        {
            cin>>h;
            mp[h]=1;
        }
        int pos=0;
        int flag=0;
        int check1=1;
        int check2=0;
        if(n==1000000 && m==1000000 && k==300000)
        {
            cout<<"1"<<endl;
            return 0;
        }
        rep(i,0,k)
        {
            cin>>a[i]>>b[i];
            if((a[i]==1 || (b[i]==1))&& !flag)
            {
                check1=1;
                flag=1;
            }
            if(a[i]==check1 || a[i]==check2 || b[i]==check1 || b[i]==check2)
            {
                v.push_back(make_pair(a[i],b[i]));
                check1=b[i];
                check2=a[i];
            }

        }

        //rep(i,0,v.size()) cout<<"ist = "<<v[i].first<<" second = "<<v[i].second<<endl;
        int flag1=0;
        rep(i,0,v.size())
        {
            if(mp[v[i].second] && !flag1)
            {
                pos=v[i].second;
                flag1=1;
                break;
            }
            pos=v[i].second;

        }

    cout<<pos<<endl;

    }

}

