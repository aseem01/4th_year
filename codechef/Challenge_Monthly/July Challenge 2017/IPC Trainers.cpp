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
struct node{
int a,b,c;
node(int a,int b,int c): a(a),b(b),c(c) {}
};
int main()
{
    //freopen("a.in", "r", stdin);
    //freopen("a.out", "w", stdout);
    int test,prof,day;
    cin>>test;
    while(test--)
    {
        vector<node>v;
        int d,g,s;
        int sum=0;
        int temp;
        cin>>prof>>day;
        for(int i=1;i<=prof;i++)
        {
            int x,y,z;
            cin>>x>>y>>z;
            int stop;
            if(x+y-1>=day)
            {
                stop=day;
                sum+=(x+y-1-day)*z;
            }
            else stop=x+y-1;
            //int temp=day-(x+y-1);
            //if(temp<0) sum+=(-1)*temp*s;
            v.push_back(node(x,stop,z));
        }
        map<int,int>mp;
        sort(v.begin(),v.end(),[](node aa,node ss)
             {
               // if(aa.a==ss.a) return aa.c>ss.c;
                //else return aa.a<ss.a;
                return aa.c>ss.c;
             }
             );

            //cout<<"After sorting "<<endl;

             for(int i=0;i<v.size();i++)
             {
                // cout<<v[i].a<<" "<<v[i].b<<" "<<v[i].c<<endl;

            /* if(v[i-1].b>=v[i].a)
             {
                 sum+=(v[i-1].b-v[i].a+1)*v[i].c;
             }*/
             int t=v[i].a;
             int tt=v[i].b;
             int ttt=v[i].c;
             int cnt=0;
             int check=tt-t+1;
             for(int i=t;i<=day;i++)
             {
                 if(mp[i]==1)
                 {
                     //sum+=ttt;
                     //cnt++;
                 }
                 else
                 {
                     mp[i]++;
                     cnt++;
                 }
                 if(cnt==check) break;
                 //cout<<"sum = "<<sum<<" mp[i] = "<<mp[i]<<" i = "<<i<<endl;
             }
             //cout<<"check = "<<check<<" cnt = "<<cnt<<endl;

             sum+=(check-cnt)*ttt;

             }
             cout<<sum<<endl;
    }

}
