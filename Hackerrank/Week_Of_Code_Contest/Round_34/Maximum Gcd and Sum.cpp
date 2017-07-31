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
LL ar[500010],br[500010],a[500010];
int main()
{
    //freopen("a.in", "r", stdin);
    //freopen("a.out", "w", stdout);
    int n;
    while(cin>>n)
    {
        set<int>s;
        map<int,int>mp,mp1,mp2;
        rep(i,0,n)
        {
            cin>>ar[i];
            mp1[ar[i]]=1;
            mp[ar[i]]=1;
            s.insert(ar[i]);
        }
        rep(i,0,n)
        {
            cin>>br[i];
            mp2[br[i]]=2;
            if(mp[br[i]]==1) mp[br[i]]=2;
            s.insert(br[i]);
        }
        set<int>::iterator it;
        int maximum=0;
        for(it=s.begin(); it!=s.end(); it++)
        {
            a[*it]++;
            maximum=max(maximum,*it);
        }


        int maxi=0;
        int ans=0;
        for(int i=0;i<=maximum;i++)
        {
            if(a[i]!=0) cout<<a[i]<<endl;
        }
        for(int i=maximum; i>=1; i--)
        {
            int k=i,count=0;
            //cout<<"iiii = "<<i<<endl;
            bool flag=false;
            while(k<=maximum)
            {
                count+=a[k];
                if(count>=2)
                {
                    cout<<"i = "<<i<<" k = "<<k<<endl;
                   cout<<i<<endl;
                    if(mp[k]==2) cout<<k*2<<endl;
                    else cout<<i+k<<endl;

                    flag=true;
                    break;
                    /*if(maxi<=i)
                    {
                        if(maxi==i)
                        {
                            if(ans<i+k) ans=i+k;
                        }
                        else ans=i+k;
                        maxi=i;
                    }*/
                }
                k+=i;
            }
            if(flag)
            {
                break;
            }
        }
        //cout<<ans<<endl;

    }
}
