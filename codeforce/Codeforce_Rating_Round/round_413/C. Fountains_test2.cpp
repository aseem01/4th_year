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
#define MP make_pair
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

LL big_mod(LL n, LL p)
{
    if(p==0) return 1;
    if(!(p&1))
    {
        LL r = big_mod(n,p/2) % MOD;
        return ( (r%MOD) * (r%MOD) ) % MOD;
    }
    else return ( ( n%MOD) * (big_mod(n,p-1) %MOD)) % MOD;
}
long long gcd(long long a, long long b)
{
    while (b != 0)
    {
        long long t = a % b;
        a = b;
        b = t;
    }
    return a;
}

//||--------------------------->||Main_Code_Start_From_Here||<---------------------------------||
bool cmp(pair<int,int>a,pair<int,int>b)
{
    return a.second<b.second;
}
int main()
{
    //freopen("a.in", "r", stdin);
    //freopen("a.out", "w", stdout);
    int n,coin,dimon,beauty,lagbe;
    char ch;
    while(cin>>n>>coin>>dimon)
    {
        int cntc=0;
        int cntd=0;
        vector<pair<int,int> >v1,v2;
        int maximumc=0,maximumd=0;
        rep(i,0,n)
        {
            cin>>beauty>>lagbe>>ch;
            if(ch=='C')
            {
                v1.push_back(make_pair(beauty,lagbe));
                if(lagbe<=coin) maximumc=max(maximumc,beauty);
                cntc++;
            }
            else
            {
                v2.push_back(make_pair(beauty,lagbe));
                if(lagbe<=dimon) maximumd=max(maximumd,beauty);
                cntd++;
            }
        }
        int total=0;
        if(maximumc!=0 && maximumd!=0) total=maximumc+maximumd;
        maximumc=0;
        maximumd=0;
        //maximumc=b_search(n,vector<pair<int,int> >v1);
        // cout<<"total = "<<total<<endl;
        int temp1,temp2;
        //cout<<"v1.size() = "<<v1.size()<<endl;
        rep(i,0,v1.size()-1)
        {
            int low=i;
            int high=v1.size()-1;
            int mid;
            while(low<high)
            {
                mid=(low+high)/2;
                temp1=v1[low].second+v1[high].second;
                temp2=v1[low].first+v1[high].first;
                if(temp1<=coin)
                {
                    maximumc=max(maximumc,temp2);
                    high=high-1;
                }
                else high=mid-1;
            }
        }
        //cout<<"maximumcc = "<<maximumc<<endl;
        rep(i,0,v2.size()-1)
        {
            int low=i;
            int high=v2.size()-1;
            while(low<high)
            {
               int mid=(low+high)/2;
                temp1=v2[low].second+v2[high].second;
                temp2=v2[low].first+v2[high].first;
                if(temp1<=coin)
                {
                    maximumd=max(maximumd,temp2);
                    high=high-1;
                }
                else high=mid-1;
            }
        }
        //cout<<"maximumd = "<<maximumd<<endl;
        cout<<max(total,max(maximumc,maximumd))<<endl;

    }


}

