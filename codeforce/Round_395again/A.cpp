//----->|try=0; while(!success) try++;|<------
//----->|Belief Yourself,Respect Yourself|<----
//----->|Be Proud Of Yourself,You're Doing Your best|<-----
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
    int n,m,k;
    while(cin>>n>>m>>k)
    {
        vector<int>v1,v2;
        for(int i=1;; i++)
        {
            if((n*i)>k) break;
            v1.push_back(n*i);
            //cout<<n*i<<endl;
        }
        for(int i=1;; i++)
        {
            if((m*i)>k) break;
            v2.push_back(m*i);
        }
        int cnt=0,a,b;
        if(v1.size()>v2.size())
        {
            for(int i=0; i<v1.size(); i++)
            {
                for(int j=0; j<v2.size(); j++)
                {
                    //cout<<"v1[i] = "<<v1[i]<<" v2[j] = "<<v2[j]<<endl;
                    if(v1[i]==v2[j]) cnt++;
                }
            }
        }
        else
        {
            for(int i=0; i<v2.size(); i++)
            {
                for(int j=0; j<v1.size(); j++)
                {
                    //cout<<"v1[i] = "<<v1[i]<<" v2[j] = "<<v2[j]<<endl;
                    if(v2[i]==v1[j]) cnt++;
                }
            }
        }

        cout<<cnt<<endl;


    }
}

