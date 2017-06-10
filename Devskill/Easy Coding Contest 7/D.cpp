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
    string s;
    cin>>test;
    while(test--)
    {
        cin>>s;
        if(s[0]=='8' && s[1]=='8')
        {
            if(s[2]=='0' && s[3]=='1' && s[4]=='1') cout<<s<<" Citycell"<<endl;
            else if(s[2]=='0' && s[3]=='1' && s[4]=='5') cout<<s<<" Teletalk"<<endl;
            else if(s[2]=='0' && s[3]=='1' && s[4]=='6') cout<<s<<" Airtel"<<endl;
            else if(s[2]=='0' && s[3]=='1' && s[4]=='7') cout<<s<<" Grameenphone"<<endl;
            else if(s[2]=='0' && s[3]=='1' && s[4]=='8') cout<<s<<" Robi"<<endl;
            else if(s[2]=='0' && s[3]=='1' && s[4]=='9') cout<<s<<" Banglalink"<<endl;
        }
        else if(s[0]=='8' && s[1]=='0')
        {

            if(s[2]=='1' && s[3]=='1') cout<<"8"<<s<<" Citycell"<<endl;
            else if(s[2]=='1' && s[3]=='5') cout<<"8"<<s<<" Teletalk"<<endl;
            else if(s[2]=='1' && s[3]=='6') cout<<"8"<<s<<" Airtel"<<endl;
            else if(s[2]=='1' && s[3]=='7') cout<<"8"<<s<<" Grameenphone"<<endl;
            else if(s[2]=='1' && s[3]=='8') cout<<"8"<<s<<" Robi"<<endl;
            else if(s[2]=='1' && s[3]=='9') cout<<"8"<<s<<" Banglalink"<<endl;

        }
        else if(s[0]=='0')
        {
            if(s[1]=='1' && s[2]=='1') cout<<"88"<<s<<" Citycell"<<endl;
            else if(s[1]=='1' && s[2]=='5') cout<<"88"<<s<<" Teletalk"<<endl;
            else if(s[1]=='1' && s[2]=='6') cout<<"88"<<s<<" Airtel"<<endl;
            else if(s[1]=='1' && s[2]=='7') cout<<"88"<<s<<" Grameenphone"<<endl;
            else if(s[1]=='1' && s[2]=='8') cout<<"88"<<s<<" Robi"<<endl;
            else if(s[1]=='1' && s[2]=='9') cout<<"88"<<s<<" Banglalink"<<endl;

        }
    }

}


