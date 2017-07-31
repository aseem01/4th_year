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
map<int,string>mp;
void go()
{
    for(int i=1;i<=6000;i++)
    {
        if((i%8)==1) mp[i]="LB";
        if((i%8)==2) mp[i]="MB";
        if((i%8)==3) mp[i]="UB";
        if((i%8)==4) mp[i]="LB";
        if((i%8)==5) mp[i]="MB";
        if((i%8)==6) mp[i]="UB";
        if((i%8)==7) mp[i]="SL";
        if((i%8)==0) mp[i]="SU";
    }
}
int main()
{
    //freopen("a.in", "r", stdin);
    //freopen("a.out", "w", stdout);
    go();
    int test,n,p;
    cin>>test;
    while(test--)
    {
        cin>>n;
        if(n%8==1) p=n+3;
        if(n%8==2) p=n+3;
        if(n%8==3) p=n+3;
        if(n%8==4) p=n-3;
        if(n%8==5) p=n-3;
        if(n%8==6) p=n-3;
        if(n%8==7) p=n+1;
        if(n%8==0) p=n-1;
        cout<<p<<mp[p]<<endl;
    }


}
