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
    string s,s1,s2,s3,s4;
    while(cin>>s)
    {
        s1="dream";
        s2="dreamer";
        s3="erase";
        s4="eraser";
        reverse(s1.begin(),s1.end());
        reverse(s2.begin(),s2.end());
        reverse(s3.begin(),s3.end());
        reverse(s4.begin(),s4.end());
        //cout<<"s1 = "<<s1<<" s2 = "<<s2<<endl;
        //cout<<"s3 = "<<s3<<" s4 = "<<s4<<endl;
        string ss="";
        reverse(s.begin(),s.end());
        rep(i,0,s.size())
        {
            ss+=s[i];
            if(ss==s1) ss="";
            if(ss==s2) ss="";
            if(ss==s3) ss="";
            if(ss==s4) ss="";
            if(ss.size()>7)
            {
                break;
            }
        }
        //cout<<"ss = "<<ss<<endl;
        if(ss.size()!=0) cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }

}
