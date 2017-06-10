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
int main()
{
    //freopen("a.in", "r", stdin);
    //freopen("a.out", "w", stdout);
    int n;
    string s;
    while(cin>>n)
    {
        cin>>s;
        int sum=0,res,ans;
        int zcnt=0;
        int ecnt=0;
        int tcnt=0;
        // rep(i,0,n) if(s[i]-'0'==0) cntz++;
         int flag=0;
        rep(i,0,s.size())
        {

            int keep=s[i]-'0';
            if(keep==0) zcnt++;
            if(keep==8) ecnt++;
            if(keep==0 || keep==8)
            {
                sum+=(i+1);
                sum=sum%MOD;
                tcnt++;
            }
        }

        //cout<<"zero = "<<zcnt<<endl;
        //cout<<"eight = "<<ecnt<<endl;
        if(n==zcnt)
        {
            res=BigMod(2,zcnt,MOD);
            ans=res-1;
            flag=1;
        }
        if(n==ecnt)
        {
            res=BigMod(2,ecnt,MOD);
            ans=res-1;
            flag=1;
        }
        if(n==tcnt)
        {
            res=BigMod(2,tcnt,MOD);
            ans=res-1;
            flag=1;
        }
        if(flag) cout<<ans<<endl;
        else
            cout<<sum<<endl;
    }

}
