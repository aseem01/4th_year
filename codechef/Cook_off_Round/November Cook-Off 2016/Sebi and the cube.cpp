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
#define rep(i, n) for(int i = 0; i < n; ++i)
#define REP(i, n) for(int i = 1; i <= n; ++i)
#define rep1(i,start,n) for(int i=start;i<n;++i)
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
int main()
{
    //freopen("a.in", "r", stdin);
    //freopen("a.out", "w", stdout);
    int test,c,k;
    cin>>test;
    while(test--)
    {
        cin>>k>>c;
        int flag=0,rem,total;
        rem=k*k*k-c;
        int t=cbrt(rem);
        if(t*t*t==rem)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            //total=rem+(rem*k*k*k);
            for(int i=1; i<=100; i++)
            {
                for(int j=1; j<=100; j++)
                {
                    int tt=cbrt(rem+j*i*i*i);
                    //cout<<"tt = "<<tt<<endl;
                    if(tt*tt*tt==(rem+j*i*i*i))
                    {
                        flag=1;
                        break;
                    }
                }
            }
                // int ans=cbrt(total);
                //cout<<"flag = "<<flag<<endl;
                if(flag) cout<<"YES"<<endl;
                else cout<<"NO"<<endl;
        }

    }
}


