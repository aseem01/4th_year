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
int Nim;
int grundy_number(int x)
{
    if(x==0) return 0 ;
    if(x%2==0) return x ;
    else grundy_number((x-1)/2);
    return true;
}

int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    LL T ;
    cin >> T ;
    set<int>s;
    for(int cas=1; cas<=T; cas++)
    {
        int n;
        Nim = 0 ;
        LL sum=0;
        LL keep;
        LL total=0;
        cin >> n ;
        for(int i=0; i<n; i++)
        {
            LL a ;
            cin >> a ;
            //total+=a;
            ////s.insert(a);
            //int res=grundy_number(a);
            a=a+1;
            if(i!=0)
            {
                sum=sum+keep^a;
            }
            keep=a;
            //Nim=Nim^a;
            //sum+=Nim;
        }

        if(sum>0) cout<<"W"<<endl;
        else cout<<"L"<<endl;
       // s.clear();
    }
    return 0;
}
