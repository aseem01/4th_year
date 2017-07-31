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
struct node
{
    int a;
    char b;
    node(int a,char b):a(a),b(b) {}

};
int main()
{
    //freopen("a.in", "r", stdin);
    //freopen("a.out", "w", stdout);
    int n,t,tt=1;
    string s;
    //getchar();
    cin>>n;
    while(n--)
    {
        //getchar();
        cin>>s;
        map<char,int>mp;
        vector<node>v;
        string ss="";
        rep(i,0,s.size())
        {
            if(mp[s[i]]==0) ss+=s[i];
            mp[s[i]]++;
        }
        rep(i,0,ss.size())
        {
            v.push_back(node(mp[ss[i]],ss[i]));
        }


        sort(v.begin(),v.end(),[](node as,node ass)
        {
            if(as.a==ass.a) return as.b<ass.b;
            else return as.a>ass.a;
        });

        int j;
        int query;
        int temp=0;
        int val;
        cin>>query;
        cout<<"Case "<<tt++<<": ";
        rep(i,0,query)
        {
            cin>>val;
            int keep=val;
            //cout<<"temp = "<<temp<<endl;
            for(j=temp; j<v.size() && val; j++)
            {
                //cout<<v[i].a<<" "<<v[i].b<<endl;
                cout<<v[j].b;
                val--;

            }
            if(i+1!=query) cout<<" ";
            temp+=keep;
        }
        cout<<endl;

    }

}

