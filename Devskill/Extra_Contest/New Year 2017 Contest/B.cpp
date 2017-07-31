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
    int test;
    string s1,s2,s3,ss;
    map<string,int>mp,mp3;
    map<string,string>mp1;
    while(cin>>test)
    {

        rep(i,0,test)
        {
            // ss="test";
            cin>>s1;
            if(s1=="create")
            {
                cin>>s2;
                if(mp[s2]==0)
                {
                    mp[s2]=1;
                    mp1[s2]=s2;
                    cout<<"OK"<<endl;
                }
                else
                {
                    mp[s2]=1;
                    mp1[s2]=s2;
                    cout<<"ERROR"<<endl;
                }
            }
            else if(s1=="change")
            {
                cin>>s2>>s3;
                if(mp[s3]==0 && mp3[s2]==0)
                {
                    mp[s3]=1;
                    mp[s2]=1;
                    mp1[s3]=s3;
                    mp1[s2]=s3;
                    //mp1[s2]=ss;
                    //mp1[s2]=s3;
                    ss=s3;
                    mp3[s2]=1;
                    cout<<"OK"<<endl;
                }
                else
                {
                    cout<<"ERROR"<<endl;
                }

            }
            else if(s1=="search")
            {
                cin>>s2;
                if(mp[s2]==0) cout<<"ERROR"<<endl;
                else if(ss=="test")cout<<s2<<endl;
                else  cout<<ss<<endl;

            }
        }
        mp.clear();
        mp1.clear();
        mp3.clear();
    }


}
