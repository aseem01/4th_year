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

//||--------------------------->||Main_Code_Start_From_Here||<---------------------------------||
LL hash1[200001],hash2[200001],ar[200001];
int main()
{
    //freopen("a.in", "r", stdin);
    //freopen("a.out", "w", stdout);
    int n,query,p,q;
    while(cin>>n)
    {
        memset(hash1,0,sizeof(hash1));
        memset(hash2,0,sizeof(hash2));
        rep(i,0,n)
        {
            cin>>ar[i];
            hash1[ar[i]]++;
            hash2[ar[i]]++;
        }
        sort(ar,ar+n);
        cin>>query;
        rep(i,0,query)
        {
            int cnt=0;
            cin>>p>>q;
            if(p>q)
            {
                int keep=p;
                p=q;
                q=keep;
            }

            for(int j=p;j<=ar[n-1];j+=p)
            {
                    cnt+=hash1[j];
                    if(j%q==0)
                    {
                        hash2[j]=0;
                    }
            }

            for(int j=q;j<=ar[n-1];j+=q)
            {

                    cnt+=hash2[j];
                    hash2[j]=hash1[j];
            }

            cout<<cnt<<endl;
        }
    }

}
