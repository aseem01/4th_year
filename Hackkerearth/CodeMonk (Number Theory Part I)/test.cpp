#include<bits/stdc++.h>
using namespace std;
#define max3(a,b,c) max(max(a,b),c)
#define min3(a,b,c) min(min(a,b),c)
#define PI acos(-1.0)
#define LL long long
#define INF_MAX 2147483647
#define INF_MIN -2147483647
#define MX 1000005
#define MOD 1000000007
int repeat_squaring(LL n,LL power,LL m)
{
    if(power==0) return 1;
    if(power==1) return n;
    if(power%2) return (n*repeat_squaring(n,power-1,m))%m;
    else
    {
      LL c=repeat_squaring(n,power/2,m);
      return c*c%m;
    }
}
int main()
{
   //freopen("a.in", "r", stdin);
    //freopen("a.out", "w", stdout);
    LL test,n,t=1,a,b,c;
    cin>>test;
    while(test--)
    {
        cin>>a>>b>>c;
        /*if(n==1)
        {
            cout<<"Case #"<<t++<<": 1"<<endl;
            continue;
        }*/
        int res=repeat_squaring(b,c,MOD);
        cout<<"res = "<<res<<endl;
        cout<<"Case #"<<t++<<": "<<repeat_squaring(b,c,MOD)<<endl;
    }
}


