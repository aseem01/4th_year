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
long long gcd(long long a, long long b) {
  while (b != 0) {
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
        int maximumc=0,maximumd=0;
        vector<pair<int,int> >v1,v2;
        rep(i,0,n)
        {
            cin>>beauty>>lagbe>>ch;
            if(ch=='C')
            {
                if(coin>=lagbe) maximumc=max(maximumc,beauty);
                v1.push_back(make_pair(beauty,lagbe));
            }
            else
            {
                if(dimon>=lagbe) maximumd=max(maximumd,beauty);
                v2.push_back(make_pair(beauty,lagbe));
            }
        }
        sort(v1.begin(),v1.end(),cmp);
        sort(v2.begin(),v2.end(),cmp);
       /* cout<<"v1.size()"<<endl;
        rep(i,0,v1.size()) cout<<v1[i].first<<" "<<v1[i].second<<endl;
        cout<<"V2.size()"<<endl;
        rep(i,0,v2.size()) cout<<v2[i].first<<" "<<v2[i].second<<endl;*/
        int total=0;
        if(maximumc==0 || maximumd==0)
        {
            maximumc=0;
            maximumd=0;
        }
        else
        {
            total=maximumc+maximumd;
            maximumc=0;
            maximumd=0;
        }
        //cout<<maximumc+maximumd<<endl;
        rep(i,0,v1.size())
        {
            rep(j,i+1,v1.size())
            {
                int temp1=v1[i].second+v1[j].second;
                int temp2=v1[i].first+v1[j].first;
                if(temp1<=coin) maximumc=max(maximumc,temp2);
            }
        }

        rep(i,0,v2.size())
        {
            rep(j,i+1,v2.size())
            {
                int temp1=v2[i].second+v2[j].second;
                int temp2=v2[i].first+v2[j].first;
                if(temp1<=dimon) maximumd=max(maximumd,temp2);
            }
        }
        //cout<<"maximumc = "<<maximumc<<" maximumd = "<<maximumd<<endl;
        //if(maximumc!=0 || maximumd!=0 || total!=0)
        cout<<max(total,max(maximumc,maximumd))<<endl;
        //else cout<<"0"<<endl;
    }

}

