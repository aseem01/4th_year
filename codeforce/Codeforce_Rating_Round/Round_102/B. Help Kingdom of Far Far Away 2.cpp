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
    string s;
    while(cin>>s)
    {
        string ss="";
        string sss="";
        int flag=0;
        int test=0;
        rep(i,s.size())
        {
            if(s[i]!='-')
            {
                if(s[i]=='.')
                {
                    test=1;
                    break;
                }
                ss+=s[i];
            }
            if(s[0]=='-') flag=1;
        }
        reverse(s.begin(),s.end());
        rep(i,s.size())
        {
            if(s[i]=='.') break;
            sss+=s[i];
        }
        reverse(sss.begin(),sss.end());
       // cout<<"s = "<<s<<" ss = "<<ss<<" sss = "<<sss<<endl;

        //first part;
        if(flag)
        {
            cout<<"($";
            string ssss="";
            for(int i=ss.size()-1,t=1; i>=0; i--)
            {
                ssss+=ss[i];
                if(t==3)
                {
                    if(i!=0)
                    ssss+=',';
                    t=0;
                }
                t++;
            }
            reverse(ssss.begin(),ssss.end());
            cout<<ssss<<".";

            //second part;
            if(test)
            {
            if(sss.size()>=2)
            {
                cout<<sss[0]<<sss[1]<<")"<<endl;
            }
            if(sss.size()==1)
            {
                cout<<sss[0]<<"0)"<<endl;
            }
            if(sss.size()==0)
            {
                cout<<"00)"<<endl;
            }
            }
            else
            {
                cout<<"00)"<<endl;
            }


        }
        else
        {
            cout<<"$";
            string ssss="";
            for(int i=ss.size()-1,t=1; i>=0; i--)
            {
                ssss+=ss[i];
                if(t==3)
                {
                    if(i!=0)
                    ssss+=',';
                    t=0;
                }
                t++;
            }
            //cout<<"sssss = "<<ssss<<endl;
            reverse(ssss.begin(),ssss.end());
            cout<<ssss<<".";

            //second part;
            if(test)
            {
            if(sss.size()>=2)
            {
                cout<<sss[0]<<sss[1]<<endl;
            }
            if(sss.size()==1)
            {
                cout<<sss[0]<<"0"<<endl;
            }
            if(sss.size()==0)
            {
                cout<<"00"<<endl;
            }
            }else
            {
                cout<<"00"<<endl;
            }


        }
    }
}
