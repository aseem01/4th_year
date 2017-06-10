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
    string year;
    while(cin>>year)
    {
        int num=0;
        int cnt=0;
        int len=year.size();
        rep(i,0,year.size())
        {
            num=num*10+year[i]-'0';
            if(year[i]!='0') cnt++;
        }
        cout<<"cnt = "<<cnt<<endl;
       if(num<10) cout<<"1"<<endl;
       else if(cnt>1)
       {
           if(len==2 && cnt==1) cout<<"10"<<endl;
           else if(len==2) cout<<100-num<<endl;

           else if(len==3 && cnt==2) cout<<"100"<<endl;
           else if(len==3) cout<<1000-num<<endl;

           else if(len==4 && cnt==3) cout<<"1000"<<endl;
           else if(len==4) cout<<10000-num<<endl;

           else if(len==5 && cnt==4) cout<<"10000"<<endl;
           else if(len==5) cout<<100000-num<<endl;

           else if(len==6 && cnt==5) cout<<"100000"<<endl;
           else if(len==3) cout<<1000000-num<<endl;

           else if(len==7 && cnt==6) cout<<"1000000"<<endl;
           else if(len==3) cout<<10000000-num<<endl;

           else if(len==8 && cnt==7) cout<<"10000000"<<endl;
           else if(len==3) cout<<100000000-num<<endl;

           else if(len==9 && cnt==8) cout<<"10000000"<<endl;
           else if(len==3) cout<<100000000-num<<endl;

       }
    }

}

