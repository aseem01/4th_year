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
    string s;
    while(cin>>s)
    {
        int len=s.size();
        LL num=0;
        rep(i,0,len)
        {
            num=num*10+s[i]-'0';
        }
        int cnt=0;
       if(len==1) cout<<"1"<<endl;
       else
       {
          rep(i,0,len)
          {
              if(s[i]!='0') cnt++;
          }
          if(len!=cnt || len==cnt)
          {
              int keep=s[0]-'0'+1;
             s[0]=keep+'0';
             int number=0;
             rep(i,1,len)
             {
                 s[i]='0';
             }
             rep(i,0,len)
             {
                 number=number*10+s[i]-'0';
             }
             //cout<<"number = "<<number<<endl;
             cout<<number-num<<endl;
             //if(len==2) number=
            //cout<<s[0]-'0'+1;
            /*if(len==2) cout<<number-num<<endl;
            if(len==3) cout<<"00"<<endl;
            if(len==4) cout<<"000"<<endl;
            if(len==5) cout<<"0000"<<endl;
            if(len==6) cout<<"00000"<<endl;
            if(len==7) cout<<"000000"<<endl;
            if(len==8) cout<<"0000000"<<endl;
            if(len==9) cout<<"00000000"<<endl;*/

          }
         /* else if(len==cnt)
          {
            if(len==2) cout<<100-num<<endl;
            if(len==3) cout<<1000-num<<endl;
            if(len==4) cout<<10000-num<<endl;
            if(len==5) cout<<100000-num<<endl;
            if(len==6) cout<<1000000-num<<endl;
            if(len==7) cout<<10000000-num<<endl;
            if(len==8) cout<<100000000-num<<endl;
            if(len==9) cout<<1000000000-num<<endl;
            if(len==10) cout<<10000000000-num<<endl;
          }*/
       }
    }

}

