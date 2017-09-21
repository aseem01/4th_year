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
    string s1,s2;
    int ar[1010],br[1010];
    int n;
    while(cin>>n)
    {
        //vector<int>v1,v2;
        multiset<int>ss1,ss2,ss3;
        cin>>s1>>s2;
        if(s1==s2)
        {
            cout<<"0"<<endl;
            cout<<"0"<<endl;
            continue;
        }
        rep(i,0,s1.size())
        {
            ar[i]=(s1[i]-'0');
            ss1.insert(ar[i]);
        }
        rep(i,0,s2.size())
        {
            br[i]=(s2[i]-'0');
            ss2.insert(br[i]);
            ss3.insert(br[i]);
        }
        //sort(ar,ar+n);
        //sort(br,br+n);
        int temp1,minimum=0,maximum=0;
       // sort(v1.begin(),v2.end());
        //sort(v2.begin(),v2.end());
        multiset<int>::iterator it,itt;

        /*cout<<"First"<<endl;
        for(it=ss1.begin();it!=ss1.end();it++)
        {
            cout<<*it<<" ";
        }
        cout<<"Second"<<endl;
        for(it=ss2.begin();it!=ss2.end();it++)
        {
            cout<<*it<<" ";
        }
        cout<<"sss2 = "<<ss2.size()<<endl;
        ss2.erase(5);
        cout<<"size() = "<<ss2.size()<<endl;*/
        for(it=ss1.begin();it!=ss1.end();it++)
        {
            itt=ss2.lower_bound(*it);
            //cout<<"temp1 = "<<*itt<<endl;
            ss2.erase(*itt);
            if(*itt<*it) minimum++;
        }

        for(it=ss1.begin();it!=ss1.end();it++)
        {
            itt=ss3.upper_bound(*it);
            //cout<<"itt = "<<*itt<<endl;
            ss3.erase(*itt);
            if(*itt>*it) maximum++;
        }
        cout<<minimum<<endl;
        cout<<maximum<<endl;



    }

}









