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
set<LL>s;
set<LL>::iterator it;
pair<LL,LL>cost[500010];
int ans[500010];
int main()
{
    //freopen("a.in", "r", stdin);
    //freopen("a.out", "w", stdout);
    int n,k;
    LL total;
    while(cin>>n>>k)
    {
        rep(i,k+1,n+k+1) s.insert(i);
        rep(i,1,n+1)
        {
            cin>>cost[i].first;
            cost[i].second=i;
        }
        sort(cost+1,cost+n+1);
       // cout<<"After sort"<<endl;
       // rep(i,1,n+1) cout<<cost[i].first<<" "<<cost[i].second<<endl;
        reverse(cost+1,cost+n+1);
        //cout<<"After reverse"<<endl;
        //rep(i,1,n+1) cout<<cost[i].first<<" "<<cost[i].second<<endl;
        total=0;
        rep(i,1,n+1)
        {
            it=s.lower_bound(cost[i].second);
            //cout<<"*it = "<<*it<<" cost[i].second = "<<cost[i].second<<endl;
            ans[cost[i].second]=*it;
            total+=(*it-cost[i].second)*cost[i].first;
            s.erase(*it);
        }
        cout<<total<<endl;
        rep(i,1,n) cout<<ans[i]<<" ";
        cout<<ans[n]<<endl;
    }

}











