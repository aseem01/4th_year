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
using namespace std;
int main()
{
    string s;
    while(cin>>s)
    {
        int Bcnt=0;
        int ucnt=0;
        int lcnt=0;
        int acnt=0;
        int scnt=0;
        int rcnt=0;
        int bcnt=0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='B') Bcnt++;
            if(s[i]=='u') ucnt++;
            if(s[i]=='l') lcnt++;
            if(s[i]=='a') acnt++;
            if(s[i]=='s') scnt++;
            if(s[i]=='r') rcnt++;
            if(s[i]=='b') bcnt++;
        }
        int ar[10];
         ar[0]=Bcnt;
         ar[1]=ucnt/2;
         ar[2]=lcnt;
         ar[3]=bcnt;
         ar[4]=acnt/2;
         ar[5]=rcnt;
         ar[6]=scnt;
         sort(ar,ar+7);
         cout<<ar[0]<<endl;
    }
}

