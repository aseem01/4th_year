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
    LL test,digit,divisor;
    cin>>test;
    while(test--)
    {
        cin>>digit>>divisor;
        LL cnt=0;
        int flag=0;
        if(digit==1)
        {

           cnt=9/divisor-1/divisor;
           if(1%divisor==0) cnt++;
        }
        if(digit==2)
        {
            cnt=99/divisor-10/divisor;
            if(10%divisor==0) cnt++;
        }

        if(digit==3)
        {
            cnt=999/divisor-100/divisor;
            if(100%divisor==0) cnt++;

        }

        if(digit==4)
        {
            cnt=9999/divisor-1000/divisor;
            if(1000%divisor==0) cnt++;
        }

        if(digit==5)
        {
            cnt=99999/divisor-10000/divisor;
            if(10000%divisor==0) cnt++;
        }

        if(digit==6)
        {
            cnt=999999/divisor-100000/divisor;
            if(100000%divisor==0) cnt++;

        }

        if(digit==7)
        {
            cnt=9999999LL/divisor-1000000LL/divisor;
            if(1000000LL%divisor==0) cnt++;

        }

        if(digit==8)
        {
            cnt=99999999LL/divisor-10000000LL/divisor;
            if(10000000LL%divisor==0) cnt++;
        }

        if(digit==9)
        {
            cnt=999999999LL/divisor-100000000LL/divisor;
            if(100000000LL%divisor==0) cnt++;
        }

        cout<<cnt<<endl;


    }

}
