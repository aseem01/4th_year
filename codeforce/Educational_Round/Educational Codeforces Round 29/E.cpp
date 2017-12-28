/****************************************************************************\
                       Belief yourself,Respect yourself                       |
                                                                              |
        /\           /--------|   |--------|  |--------|    ----       ----   |
       /  \         /             |           |             | \         / |   |
      /    \       |              |           |             |  \       /  |   |
     /      \      |----|         |--------|  |--------|    |   \     /   |   |
    /--------\          |------|  |           |             |    -----    |   |
   /          \                |  |           |             |             |   |
  /            \               /  |           |             |             |   |
----          ---- |----------/   |--------|  |--------|  ----          ----  |
                                                                              |
*****************************************************************************/
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

//Bit Operation
bool checkBit(LL n, int i) { return n&(1LL<<i); }  //AND
LL setBit(LL n, int i) { return n|(1LL<<i);; }     //OR
LL resetBit(LL n, int i) { return n&(~(1LL<<i)); } //OFF

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
     int n,x,y;
     while(cin>>n)
     {
         vector<pair<int,int> >v,vv,vvv;
         rep(i,0,n)
         {
             cin>>x>>y;
             vvv.push_back(make_pair(y,x));
             vv.push_back(make_pair(x,y));
         }
         sort(vvv.begin(),vvv.end());
         for(int i=0;i<vvv.size();i++)
         {
             v.push_back(make_pair(vvv[i].second,vvv[i].first));
         }
         if(n==2)
         {
            if(vv[0].second>vv[1].first) cout<<"1"<<endl;
            else if(vv[1].second>v[1].first) cout<<"1"<<endl;
            else cout<<"-1"<<endl;
            continue;
         }
         //cout<<"After sorting"<<endl;
        // for(int i=0;i<v.size();i++) cout<<v[i].first<<" "<<v[i].second<<endl;
            //int xx=v[0].first;
             int yy=v[0].second;
             int temp1=v[n-1].second;
             int temp2=v[n-1].first;
             int flag=0;
             int ansx,ansy;
         for(int i=1;i<n-1;i++)
         {
             if(yy>=v[i].first || (v[i].second>temp1)|| (v[i].second>temp2))
             {
                 flag=1;
                 ansx=v[i].first;
                 ansy=v[i].second;
                 break;
             }
             else yy=v[i].second;

         }
         if(!flag) cout<<"-1"<<endl;
         else
         {
             for(int i=0;i<n;i++)
             {
                 if(vv[i].first==ansx && vv[i].second==ansy)
                 {
                     cout<<i+1<<endl;
                     break;
                 }
             }
         }
     }

}









