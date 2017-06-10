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
    string s;
    while(cin>>s)
    {
        string ss="";
        //ans="dreamdreamererasererase"
        rep(i,0,s.size())
        {
            ss+=s[i];
            if(ss=="dream" && s[i+1]!='e')
            {
               // v.push_back(ss);
               //cout<<"inss = "<<ss<<endl;
                ss="";
            }
            else if(ss=="dream" && s[i+1]=='e' && s[i+2]=='r' && s[i+3]=='a' && s[i+4]=='s' && s[i+5]=='e' && s[i+6]=='r' )
            {
                ss="";
            }
            else if(ss=="dream" && s[i+1]=='e' && s[i+2]=='r' && s[i+3]=='a' && s[i+4]=='s' && s[i+5]=='e' )
            {
                ss="";
            }
            else if(ss=="dream" && s[i+1]!='e' && s[i+2]!='r')
            {
                ss="";
            }
            //else if(s==)


            else if(ss=="dreamer" && s[i+1]!='a')
            {
               // v.push_back(ss);
               //cout<<"inss = "<<ss<<endl;
                ss="";
            }
            else if(ss=="dreamer" &&  s[i+1]=='a' && s[i+2]=='s' && s[i+3]=='e' && s[i+4]=='r' )
            {
                ss="er";
            }
            else if(ss=="dreamer" && s[i+1]=='a' && s[i+2]=='s' && s[i+3]=='e' )
            {
                ss="e";
            }
            else if(ss=="eraser")
            {
                //v.push_back(ss);
                ss="";
            }
            else if((ss=="erase"&& s[i+1]!='r'))
            {
                //v.push_back(ss);
                ss="";
            }

        }
        //cout<<"ss = "<<ss<<endl;
        if(ss.size()!=0) cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }

}


