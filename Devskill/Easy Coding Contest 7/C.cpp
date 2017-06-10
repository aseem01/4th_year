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
LL ar[61];
void go()
{
    ar[1]=1;
    ar[2]=2;
    for(int i=3;i<=60;i++)
    {
        ar[i]=ar[i-1]+ar[i-2];
    }
}
int main()
{
    //freopen("a.in", "r", stdin);
    //freopen("a.out", "w", stdout);
    go();
    //for(int i=1;i<=60;i++) cout<<ar[i]<<endl;
    int n;
    while(cin>>n)
    {
        int pos;
        for(int i=1;i<=60;i++)
        {
            if(ar[i]>=n && ar[i+1]>n)
            {
                pos=i;
                break;
            }
        }

        if(pos==1) cout<<"Showmic brings 1 chocolate on 1st day."<<endl;
        else if(pos==2) cout<<"Showmic brings 2 chocolates on 2nd day."<<endl;
        else if(pos==3) cout<<"Showmic brings 3 chocolates on 3rd day."<<endl;
        else
        {
            cout<<"Showmic brings "<<n<<" chocolates on "<<pos<<"th day."<<endl;
        }
    }

}
