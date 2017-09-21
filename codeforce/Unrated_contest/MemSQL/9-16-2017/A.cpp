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
    string s,s1,s2,s3,s4,s5,s6,s7,s8;
    int n;
    while(cin>>n)
    {
        cin>>s;
        s1="vaporeon";
        s2= "jolteon";
        s3="flareon";
        s4="espeon";
        s5="umbreon";
        s6="leafeon";
        s7="glaceon";
        s8="sylveon";

        vector<int>v;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]>='a' && s[i]<='z')
            {
                v.push_back(i);
            }
        }
        if(v.size()==0)
        {
            if(s.size()==8) cout<<"vaporeon"<<endl;
            else if(s.size()==7) cout<<"jolteon"<<endl;
            else if(s.size()==6) cout<<"espeon"<<endl;
        }
        else
        {
           int flag=0;
           //rep(i,0,v.size()) cout<<v[i]<<" ";
           //cout<<endl;
           for(int i=0;i<v.size();i++)
           {
               if(s[v[i]]!=s1[v[i]]) flag=1;
           }
           if(!flag && s.size()==s1.size())
           {
               cout<<s1<<endl;
               //break;
               continue;
           }


           flag=0;
           for(int i=0;i<v.size();i++)
           {
               if(s[v[i]]!=s2[v[i]]) flag=1;
           }
           if(!flag && s.size()==s2.size())
           {
               cout<<s2<<endl;
               //break;
               continue;
           }



           flag=0;
           for(int i=0;i<v.size();i++)
           {
               if(s[v[i]]!=s3[v[i]]) flag=1;
           }
           if(!flag && s.size()==s3.size())
           {
               cout<<s3<<endl;
              // break;
              continue;
           }



           flag=0;
           for(int i=0;i<v.size();i++)
           {
               if(s[v[i]]!=s4[v[i]]) flag=1;
           }
           if(!flag && s.size()==s4.size())
           {
               cout<<s4<<endl;
               //break;
               continue;
           }




           flag=0;
           for(int i=0;i<v.size();i++)
           {
               if(s[v[i]]!=s5[v[i]]) flag=1;
           }
           if(!flag && s.size()==s5.size())
           {
               cout<<s5<<endl;
               //break;
               continue;
           }





           flag=0;
           for(int i=0;i<v.size();i++)
           {
               if(s[v[i]]!=s6[v[i]]) flag=1;
           }
           if(!flag && s.size()==s6.size())
           {
               cout<<s6<<endl;
               //break;
               continue;
           }



           flag=0;
           for(int i=0;i<v.size();i++)
           {
               if(s[v[i]]!=s7[v[i]]) flag=1;
           }
           if(!flag && s.size()==s7.size())
           {
               cout<<s7<<endl;
               //break;
               continue;
           }




           flag=0;
           for(int i=0;i<v.size();i++)
           {
               if(s[v[i]]!=s8[v[i]]) flag=1;
           }
           if(!flag && s.size()==s8.size())
           {
               cout<<s8<<endl;
               //break;
               continue;
           }





        }
    }


}









