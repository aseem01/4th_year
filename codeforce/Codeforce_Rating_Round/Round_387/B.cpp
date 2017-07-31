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
    int n,pabe;

    while(cin>>n)
    {
        cin>>s;
        //int len=s.size();
        map<char,int>mp,mp1;
        if(n%4!=0)
        {
            cout<<"==="<<endl;
            continue;
        }
        for(int i=0; i<n; i++)
        {
            if(s[i]=='A') mp[s[i]]++;
            if(s[i]=='C') mp[s[i]]++;
            if(s[i]=='G') mp[s[i]]++;
            if(s[i]=='T') mp[s[i]]++;

        }
        int pabe=n/4;
        int ta=pabe-mp['A'];
        int tc=pabe-mp['C'];
        int tg=pabe-mp['G'];
        int tt=pabe-mp['T'];
        string sss="";
        //cout<<"s = "<<s<<endl;
        for(int i=0; i<n; i++)
        {
            if(s[i]=='?')
            {
                if(ta)
                {
                    sss+='A';
                    ta--;
                }
                else if(tc)
                {
                    sss+='C';
                    tc--;
                }
                else if(tg)
                {
                    sss+='G';
                    tg--;
                }
                else if(tt)
                {
                    sss+='T';
                    tt--;
                }
                //cout<<"sss = "<<sss<<endl;

            }
            else
            {
                sss+=s[i];
            }
        }
        for(int i=0;i<sss.size();i++)
        {
            if(sss[i]=='A') mp1['A']++;
             if(sss[i]=='C') mp1['C']++;
             if(sss[i]=='G') mp1['G']++;
              if(sss[i]=='T') mp1['T']++;
        }
        if(mp1['A']==mp1['C'] && mp1['C']==mp1['G'] && mp1['G']==mp1['T'])
        {
            cout<<sss<<endl;
        }
        else cout<<"==="<<endl;

    }


}
