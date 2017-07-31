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
     string s1,s2;
     while(cin>>s1>>s2)
     {
         if(s1[0]=='0' && s2[0]=='0') break;
         if(s1.size()>s2.size())
         {
             int cnt=s1.size()-s2.size();
             string res="";
             for(int i=1;i<=cnt;i++) res+="0";
             s2=res+s2;
         }
         else if(s2.size()>s1.size())
         {
             int cnt=s2.size()-s1.size();
             string res="";
             for(int i=1;i<=cnt;i++) res+="0";
             s1=res+s1;
         }
         int sum=0;
         int cnt=0;
         for(int i=s1.size()-1;i>=0;i--)
         {
             int first=s1[i]-'0';
             int second=s2[i]-'0';
             //cout<<"first = "<<first<<" second = "<<second<<endl;
             sum=first+second+sum;
             //cout<<"sum = "<<sum<<endl;
             if(sum>9)
             {
                 cnt++;
                 sum=1;
             }
             else sum=0;
             //cout<<"cnt = "<<cnt<<endl;
         }
         if(cnt==0) cout<<"No carry operation."<<endl;
         else if (cnt==1) cout<<cnt<<" carry operation."<<endl;
         else cout<<cnt<<" carry operations."<<endl;

     }

}

