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
int main()
{
    //freopen("a.in", "r", stdin);
    //freopen("a.out", "w", stdout);
   int tc,n,c,w;
   cin>>tc;
   while(tc--)
   {
       vector<pair<int,int> > v,vv;
       cin>>n;
       rep(i,0,n)
       {
           cin>>c;
           v.push_back(make_pair(c,c));
       }


       rep(i,0,n)
       {
           cin>>w;
           v[i].second=w;
       }
       sort(v.begin(),v.end());
       v.push_back(make_pair(-1,-1));
       int p;
       int flag=0;
       rep(i,0,v.size()-1)
       {
          // cout<<v[i].first<<" "<<v[i].second<<endl;
           if(v[i].first==v[i+1].first)
           {
               p=max(v[i].second,v[i+1].second);
               flag=1;
           }
           else
           {
               if(flag)
               {
               vv.push_back(make_pair(v[i].first,p));
               flag=0;
               }
               else vv.push_back(make_pair(v[i+1].first,v[i+1].second));
           }
       }

       rep(i,0,vv.size()) cout<<vv[i].first<<" "<<vv[i].second<<endl;

       /*LL sum=0;
       LL maximum=0;
       for(int i=0;i<v.size();i++)
       {
           if(v[i].first!=v[i+1].first)
           {
               sum+=v[i].second;
               if(i+1==v.size()) sum+=v[v.size()-1].first;
               //i++;
           }
           else
           {
               maximum=max(sum,maximum);
               //i=i-1;
               sum=0;
           }
       }

       cout<<maximum<<endl;*/

   }

}

