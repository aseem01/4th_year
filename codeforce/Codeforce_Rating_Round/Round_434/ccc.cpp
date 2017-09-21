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
int main()
{
    //freopen("a.in", "r", stdin);
    //freopen("a.out", "w", stdout);
    string s,ss,sss,pre;
    while(cin>>s)
    {
        map<char,int>mp,mp1;
        mp['a']=1;
        mp['e']=1;
        mp['i']=1;
        mp['o']=1;
        mp['u']=1;
        ss="";
        pre="";
        sss="";
        rep(i,0,s.size())
        {
            if(mp[s[i]])
            {
                pre+=sss+s[i];
                sss="";
                ss="";
            }
            else
            {
                sss+=s[i];
                ss="";
                for(int j=0; j<sss.size(); j++)
                {
                    if(mp1[sss[j]]==0)
                    {
                        ss+=sss[j];
                        mp1[sss[j]]=1;
                    }
                }
                //cout<<"ss = "<<ss<<endl;
                mp1.clear();
                if(ss.size()==2 || sss.size()>=2)
                {
                    if(ss.size()==2)
                    {
                        if(ss[0]==ss[1] && s[i+1]!=ss[0] && mp[s[i+1]]!=1 && (i+1<s.size()))
                        {
                            cout<<pre+sss<<" ";
                            ss="";
                            sss="";
                            pre="";
                        }
                        else if(ss[0]!=ss[1] && (i+1)<s.size() && mp[s[i+1]]!=1)
                        {
                            cout<<pre+sss<<" ";
                            ss="";
                            sss="";
                            pre="";
                        }
                    }
                    else if(sss.size()>=2)
                    {
                        if(mp[s[i+1]]!=1 && (i+1)<s.size() )
                        {
                            if(sss[sss.size()-1]==sss[sss.size()-2] && s[i+1]!=sss[sss.size()-1])
                            {
                                cout<<pre+sss<<" ";
                                ss="";
                                sss="";
                                pre="";
                            }
                        }


                        if(sss[0]==sss[1] && s[i+1]!=sss[0] && mp[s[i+1]]!=1 && (i+1<s.size()))
                        {
                            cout<<pre+sss<<" ";
                            ss="";
                            sss="";
                            pre="";
                        }
                        else if(sss[0]!=sss[1] && (i+1)<s.size() && mp[s[i+1]]!=1)
                        {
                            cout<<pre+sss<<" ";
                            ss="";
                            sss="";
                            pre="";
                        }


                    }
                }
            }
        }
        if(sss.size()!=0) cout<<pre+sss<<endl;
        else cout<<pre+sss<<endl;
    }

}









