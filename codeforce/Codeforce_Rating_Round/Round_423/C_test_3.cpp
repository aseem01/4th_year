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

const int MX = 2000005;
bool ok[MX];
char s[MX];
int mx;

int main()
{
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    int n;
while(cin>>n)
{
    mx = 0;
    char ans[MX];
    rep(i, 1, n+1)
    {
        cin>>s;

        int len = strlen(s);

        int k;
        scanf("%d", &k);
        memset(ok,false,sizeof(ok));
        rep(i, 1, k+1)
        {
            int l;
            cin>>l;
            --l;
            int r = l+len-1;
            mx = max(mx, len+l);
            for(int p=l;p<=1000010;p++)
            {
                if(p>=l && p<=r)
                {
                    ans[p] = s[p-1];
                    ok[p] = 1;
                }
                else break;
            }
        }
    }
    cout<<"max = "<<mx<<endl;
    rep(i, 0, mx)
    {
        if(ok[i]==1) cout<<ans[i];
        else cout<<"a";
    }
    cout<<endl;
}
}
