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
long long gcd(long long a, long long b) {
  while (b != 0) {
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
    string s;
    int n,q;
    char ar[26];
    while(cin>>s)
    {
        map<int,int>mp;
        int k=1;
        for(char ch='a';ch<='z';ch++)
        {
            ar[ch]=k;
            k++;
        }
        int flag=1;
        int temp=0;
        string ss="";
        rep(i,0,s.size())
        {

            if(s[i]!=s[i+1])
            {
              temp+=ar[s[i]];
              //cout<<"temp = "<<temp<<endl;
              mp[temp]=1;
              ss="";
              temp=0;
            }
            else
            {

                temp+=ar[s[i]];
                mp[temp]=1;
                //cout<<"temp2 = "<<temp<<endl;
                ss+=s[i];
            }
        }
        if(ss.size()!=0)
        {
            temp+=ar[s[s.size()-1]];
        }


        cin>>n;
        rep(i,0,n)
        {
            cin>>q;
            if(mp[q]==1) cout<<"Yes"<<endl;
            else cout<<"No"<<endl;
        }

    }

}
