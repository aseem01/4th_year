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
    int n,x,y,tc=1,k=1,t;
    string s;
    while(scanf("%d",&n)!=EOF)
    {
        map<string,int>m,rp;
        tc=1,t=1;
        while(n--)
        {
            cin>>s;
            cout<<"Instruction "<<tc<<": ";
            if(m[s])
            {
                cout<<"repeat step "<<rp[s]<<endl;
                t--;
            }
            else
            {
                if(s[1]=='+')
                {
                    cout<<"add "<<s[0]<<" to "<<s[2]<<endl;
                }
                else if(s[1]=='-')
                {
                    cout<<"subtract "<<s[2]<<" from "<<s[0]<<endl;
                }
                else if(s[1]=='*')
                {
                    cout<<"multiply "<<s[0]<<" with "<<s[2]<<endl;
                }
                else
                {
                    cout<<"divide "<<s[0]<<" by "<<s[2]<<endl;
                }

            }
            if(m[s]==0)
            {
                m[s]++;
                rp[s]=t;
                if(s[1]=='+'||s[1]=='*')
                {

                    swap(s[0],s[2]);
                    m[s]++;
                    rp[s]=t;
                }

            }
            tc++;
            t++;
        }

    }
}
