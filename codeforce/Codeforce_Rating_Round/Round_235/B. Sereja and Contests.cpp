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
   int round,total,play,value,div2,div1;
   while(cin>>total>>play)
   {
       map<int,int>mp;
       vector<int>v;
       rep(i,0,play)
       {
           cin>>value;
           if(value==1)
           {
               cin>>div2>>div1;
               mp[div2]=1;
               mp[div1]=1;
           }
           else
           {
               cin>>div2;
               mp[div2]=1;
           }
       }
       int cnt=0,minimum=0;
       rep(i,1,total)
       {
           if(mp[i]==0) v.push_back(i);
       }
       //cout<<"I'm here"<<endl;
       //rep(i,0,v.size()) cout<<v[i]<<" ";
       //cout<<endl;
       for(int i=0;i<v.size();)
       {
           if((v[i-1]+1)==v[i])
           {
               minimum++;
               i+=2;
           }
           else i++;
       }
       //if(minimum!=0)
      // cout<<"minimum = "<<minimum<<endl;
       cout<<v.size()-minimum<<" "<<v.size()<<endl;
   }

}

