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
bool checkBit(LL n, int i)
{
    return n&(1LL<<i);    //AND
}
LL setBit(LL n, int i)
{
    return n|(1LL<<i);;    //OR
}
LL resetBit(LL n, int i)
{
    return n&(~(1LL<<i));    //OFF
}

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
struct cmp
{
    bool operator()(const string& first, const string& second)
    {
        return first.size() < second.size();
    }
};
int main()
{
    //freopen("a.in", "r", stdin);
    //freopen("a.out", "w", stdout);
    int n;
    string s[100010],ss,sss;
    while(cin>>n)
    {
        for(int i=0; i<n; i++) cin>>s[i];
        ss="";
        vector<string>vvv;
        map<string,int>mp,mp1;

        for(int i=0; i<n; i++)
        {
            for(int j=0; j<s[i].size(); j++)
            {
                ss="";
                for(int x=j; x<s[i].size(); x++)
                {
                    sss=s[i];
                    ss+=sss[x];
                    if(mp1[ss]==0)
                    {
                    mp[ss]++;
                    mp1[ss]++;
                    }
                }
            }
            mp1.clear();
        }

        ss="";
        for(int i=0; i<n; i++)
        {


            for(int j=0; j<s[i].size(); j++)
            {
                ss="";
                for(int k=j; k<s[i].size(); k++)
                {
                    sss=s[i];
                    ss+=sss[k];
                    vvv.push_back(ss);
                }
            }
            cmp c;
            sort(vvv.begin(), vvv.end(), c);
            for(int j=0; j<vvv.size(); j++)
            {
                if(mp[vvv[j]]==1)
                {
                    mp[vvv[j]]++;
                    cout<<vvv[j]<<endl;
                    break;
                }
            }
            vvv.clear();


        }


    }
}









