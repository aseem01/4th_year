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
    int test;
    string s;
    cin>>test;
    while(test--)
    {
        cin>>s;
        string ss="";
        int k=0;
        if(s.size()<5)
        {
            string sss="";
            int k=0;
            int ac=1;
            if(s[k]=='0')
            {
                while(s[k++]=='0')
                {
                    //sss+=s[k];
                    ac++;
                    //break;
                }
                for(int j=ac-1; j<s.size(); j++)
                {
                    sss+=s[j];
                }
                 cout<<sss<<endl;
            }
            else cout<<s<<endl;

        }
        else
        {
            for(int i=s.size(); k<=5; i--)
            {
                k++;
                ss+=s[i];
            }
            reverse(ss.begin(),ss.end());
            string ssss="";
            int k=0;
            int ac=1;
            if(ss[k]=='0')
            {
                while(ss[k++]=='0')
                {
                    //sss+=s[k];
                    ac++;
                    //break;
                }
                for(int j=ac-1; j<ss.size(); j++)
                {
                    ssss+=ss[j];
                }
                 cout<<ssss<<endl;
            }
            else cout<<ss<<endl;
        }
    }

}

