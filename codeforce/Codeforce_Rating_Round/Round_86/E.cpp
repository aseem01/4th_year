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
vector<int>v;
int sieve(int high)
{
    int n=sqrt(high);
    for(int i=2;i<sqrt(high);i++)
    {
        int flag=0;
        for(int j=2;j<=n;j++)
        {
            if(i%j==0 && i!=j) flag=1;
        }
        if(!flag) v.push_back(i);
    }
}
int main()
{
    //freopen("a.in", "r", stdin);
    //freopen("a.out", "w", stdout);
    int low,high;
    while(cin>>low>>high)
    {
        int can=0;
        v.clear();
        sieve(high);
        //cout<<"prime number"<<endl;
        //for(int i=0;i<v.size();i++) cout<<v[i]<<" ";
        //cout<<endl;
        //cout<<"I'm here"<<endl;
        map<int,int>mp,mp1,mp2;

            for(int a=0;a<v.size();a++)
            {
                for(int b=1;b<sqrt(high);b++)
                {
                    int keep=v[a]*v[a]+b*b;
                    if(keep>=low && keep<=high && !mp[b] && v[a]!=b)
                    {
                        //cout<<"v[a] = "<<v[a]<<" b = "<<b<<" keep = "<<keep<<endl;
                        mp[b]++;
                       // mp1[keep]++;
                        //mp2[v[a]]++;
                        can++;
                    }
                }
            }

        cout<<can<<endl;
    }

}



