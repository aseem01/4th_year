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
#define LL long long int
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


bool status[1100002];
int ans[MX];
int isprime[MX];
vector<int>prime;
void siv()
{
    memset(isprime,1,sizeof(isprime));
    for(int i=2; i<MX; i++)
    {
        if(isprime[i])
        {
            for(int j=2; j*i<MX; j++)
            {
                isprime[i*j]=0;
            }
        }
    }
   // prime.push_back(2);
    for(int i=2; i<MX; i++)
    {
        if(isprime[i])
        {
            // cout<<i<<" ";
            prime.push_back(i);
        }
    }

}

int main()
{
    //freopen("a.in", "r", stdin);
    //freopen("a.out", "w", stdout);
  siv();
    int n,k;
    map<int,int>mp;
    int test;
    scanf("%d",&test);
    while(test--)
    {
        scanf("%d",&n);
        int sum=0;
        if(n%2==1) sum=0;
        else
        {
            for(int i=0;)
        }
        printf("%d\n",sum);
        mp.clear();
    }


}

