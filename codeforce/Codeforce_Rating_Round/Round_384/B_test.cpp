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
    int n,k;
    while(cin>>n>>k)
    {
       /* int res1=1LL<<n;//[   << is called left shift]; here 1<<n,if n=3,then 1<<3;1=0001 n=3,
        //so 1000 right n number zero add then account.it's result 8;
        //if n=2,then 100,result=4;
        cout<<res1<<endl;
        int res2=2LL<<n;
        //If n=2,then answer=8,explanation 2 binary: 10,then n left shift so res=1000;result=8;
        cout<<res2<<endl;
        int res3=3<<n;
        //IF n=2,then answer=12,explanation 3 binary: 11,then n left shift ,so res3=1100;result=12;
        cout<<res3<<endl;
        //conculsion when left shift,time*pow(2,n),times means 1,2,3,4,5..etc bit left shift ;
        */



        /*int res1=n>>1; //[ >> Right shift,IF n=3,then 3 binary=11,here right shift by 1; so res=1 instead of 11
        // i bit right shift,res1=1  ]
        cout<<res1<<endl;

        int res2=n>>2;// here,n=4,then binary 4=100 ,2 bit right shift then res2=1 instead of 100;
        cout<<res2<<endl;

        int res3=n>>3;//here,n=8,then binary 8=1000,3 Right shift then res3=1 instead of 1000;
        cout<<res3<<endl;
        //Conclusion when right shift ,n/pow(2,times),here times means 1,2,3,4,5..etc bit by right shift;
        */




    }


}
