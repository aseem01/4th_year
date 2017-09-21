//Belief yourself,Respect yourself
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
    int n,ar[27],br[27];
    while(cin>>n)
    {
        rep(i,0,n) cin>>ar[i];
        sort(ar,ar+n);
        //cout<<"After sorting"<<endl<<endl;
        //for(int i=n-1;i>=0;i--) cout<<ar[i]<<" ";
        //cout<<endl;
        map<int,int>mp;
        memset(br,0,sizeof(br));
        LL sum=ar[n-1];
        mp[ar[n-1]]=1;
        br[n-1]=ar[n-1];
        for(int i=n-2;i>=0;i--)
        {
            //sum+=ar[i]-1;
            if(mp[ar[i]]==0)
            {
                //cout<<"ar[i] = "<<ar[i]<<endl;
                sum+=ar[i];
                mp[ar[i]]=1;
                br[i]=ar[i];
            }
            else
            {
                //int keep=mp[ar[i+1]].begin()->first-1;
                //cout<<"br[i+1] = "<<br[i+1]<<" i = "<<i<<endl;
                int keep=br[i+1]-1;
                if(keep>=0)
                {
                //cout<<"keep = "<<keep<<endl;
                sum+=keep;
                mp[keep]=1;
                br[i]=keep;
                //cout<<"i = "<<i<<endl;
                }
            }
        }
        cout<<sum<<endl;
    }

}

