
//Belief yourself,Respect yourself

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
    int row,col;
    string s[10001];
    while(cin>>row>>col)
    {
        rep(i,0,row)
        {
            cin>>s[i];
        }
        string ss="";
        int cnt=0;
        for(int i=0;i<row;i++)
        {
            for(int j=0;j<col;j++)
            {
                ss="";
                if(s[i][j]>='a' && s[i][j]<='z' && s[i][j]!='x')
                {
                   // cout<<"s[i][j] = "<<s[i][j]<<endl;
                    ss+=s[i][j];
                    ss+=s[i][j+1];
                    //cout<<"ssss = "<<ss<<endl;
                    ss+=s[i+1][j];
                    ss+=s[i+1][j+1];
                    //cout<<"ss = "<<ss<<endl;
                    int ff=0,aa=0,cc=0,ee=0;
                    for(int k=0;k<ss.size();k++)
                    {
                        if(ss[k]=='f') ff++;
                        if(ss[k]=='a') aa++;
                        if(ss[k]=='c') cc++;
                        if(ss[k]=='e') ee++;
                    }

                    if(ff==1 && aa==1 && cc==1 && ee==1) cnt++;
                }
            }
        }
        cout<<cnt<<endl;
    }

}

