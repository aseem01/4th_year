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
    int a,b,c,d,c1,c2,r1,r2,d1,d2;
    while(cin>>r1>>r2>>c1>>c2>>d1>>d2)
    {
        int flag=0;
        for(a=d1;a>0;a--)
        {
            b=r1-a;
            c=c1-a;
            d=r2-c;
            //cout<<"a = "<<a<<" b = "<<b<<" c = "<<c<<" d = "<<d<<endl;
            if(a+b==r1 && c+d==r2 && a+c==c1 && b+d==c2 && a+d==d1 && b+c==d2)
            {

                if((a==b || a==c || a==d || b==c || b==d || c==d )||(a>9 || b>9 || c>9 || d>9)|| (a==0 || b==0 || c==0 || d==0))
                {

                }
                else
                {
                    flag=1;
                    break;
                }
            }
        }
        if(flag) cout<<a<<" "<<b<<endl<<c<<" "<<d<<endl;
        else cout<<"-1"<<endl;
    }

}


