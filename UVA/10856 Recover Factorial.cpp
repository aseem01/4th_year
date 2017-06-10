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

const int MAX=10000010;
vector<int>prime;
int factor[MAX];
bool Isprime[MAX];
void sieve()
{
    memset(Isprime,true,sizeof(Isprime));
    Isprime[0]=Isprime[1]=false;
    int sqr=sqrt(MAX);
    rep(i,2,sqr+1)
    {
        if(Isprime[i])
        {
            prime.push_back(i);
            for(int j=i*i;j<MAX;j+=i) Isprime[j]=false;
        }
    }
}


void precal()
{
   sieve();
   //rep(i,0,26) cout<<"prime = "<<prime[i]<<endl;
   factor[0]=factor[1]=0;
   rep(i,2,MAX)
   {
       factor[i]=factor[i-1];
       int n=i,p=0;
       while(Isprime[n]==false)
       {
           if(n%prime[p]==0)
           {
               factor[i]++;
               n=n/prime[p];
           }
           else p++;
       }
       factor[i]++;
   }

   //rep(i,0,10) cout<<"check = "<<factor[i]<<endl;
}

int binary_search(int value)
{
    int low=0;
    int high=MAX;
    int mid;
    while(low<=high)
    {
        mid=(low+high)/2;
        if(factor[mid]==value) return mid;
        if(factor[mid]<value) low=mid+1;
        else if(factor[mid]>value) high=mid-1;
    }
    if(factor[high]==value) return high;
    return -1;
}


int main()
{
    //freopen("a.in", "r", stdin);
    //freopen("a.out", "w", stdout);
    precal();
    int t=1,n,ans;
    while(cin>>n)
    {
        if(n<0) break;
        if(n==0) ans=0;
        else ans=binary_search(n);
        if(ans<0) cout<<"Case "<<t++<<": Not possible."<<endl;
        else cout<<"Case "<<t++<<": "<<ans<<"!"<<endl;
    }


}
