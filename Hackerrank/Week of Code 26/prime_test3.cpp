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
#define ll long long int
#define max_value 1000001
#define endl "\n"
vector<int > prime ;
bool is_prime[1000002];
void seive()
{
    for(int i = 2 ; i<= max_value ; i++)
        if( not is_prime[i])
        {
            prime.push_back(i);
            for(int  j = i * 2 ; j<= max_value ; j+= i)
                is_prime[j] = true ;
        }
}
vector<ll > seg;
bool flag[1000005];
void segmented_seive(ll L, ll M)
{
    seg.clear() ;
    if( M < max_value)
    {
        for(int i = 0 ; i < prime.size() ; i++)
            if( prime[i] > M) break;
            else if(prime[i] >= L) seg.push_back(prime[i]);

        return ;
    }
    for(int i = 0 ; i< M - L + 1 ; i++) flag[i] = true ;

    for(int i = 0 ; i< prime.size() ; i++)
    {
        if(prime[i] > M ) break;
        ll ind =  (L / prime[i]) * prime[i] ;
        while(ind < L) ind += prime[i] ;

        for(ll j = ind ; j<= M ; j+= prime[i])
            flag[j - L] = false;
    }
    for(ll i = 0 ; i < M - L  + 1; i++)
        if(flag[i])
            seg.push_back( i + L);
}

int main()
{
    seive();
    ll N, M ;
    vector<int>v;
    cin>>N>>M;

    segmented_seive(N, M) ;
    for(int i = 0 ; i< seg.size() ; i++)
    {
        v.push_back(seg[i]);
    }
    int cnt=0;
    for(int i=1; i<v.size(); i++)
    {
        if((abs(v[i]-v[i-1]))==2) cnt++;
    }
    cout<<cnt<<endl;
    //v.clear();


}

