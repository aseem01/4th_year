//----->|try=0; while(!success) try++;|<------
//----->|Belief Yourself,Respect Yourself|<----
//----->|Be Proud Of Yourself,You're Doing Your best|<-----
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
#define AND(a,b) ((a) & (b))
#define OR(a,b) ((a)|(b))
#define XOR(a,b) ((a) ^ (b))
#define MP make_pair
#define sqr(x) ((x)*(x))
#define sqrt(x) sqrt(1.0*(x))
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
int main()
{
    //freopen("a.in", "r", stdin);
    //freopen("a.out", "w", stdout);
    int test,n,value;
    string s,keep;
    cin>>test;
    while(test--)
    {
        cin>>n;
        map<string,int>mp;
        // vector<int>v;
        vector<string>v1,v;
        getchar();
        rep(i,0,n)
        {
            getline(cin,s);
            if(i==0) keep=s;
            string ss="";
            rep(i,0,s.size())
            {
                if(s[i]!=' ')
                {
                    ss+=s[i];
                }
                else
                {
                    mp[ss]++;
                    ss="";
                }
            }
            if(ss.size()!=0) mp[ss]++;
        }
        int num=0;
        string sss="";
        for(int j=0; j<keep.size(); j++)
        {
            if(keep[j]!=' ')
            {
                //num=num*10+(keep[j]-'0');
                sss+=keep[j];
            }
            else
            {
                v1.push_back(sss);
                sss="";
            }
        }
        if(sss.size()!=0) v1.push_back(sss);
        //rep(i,0,v1.size()) cout<<v1[i]<<" ";
        //cout<<endl;
        for(int i=0; i<v1.size(); i++)
        {
            //cout<<"check = "<<v1[i]<<" ache = "<<mp[v1[i]]<<endl;
            if(mp[v1[i]]==n) v.push_back(v1[i]);
        }
        sort(v.begin(),v.end());
        if(v.size()==0) cout<<"Empty"<<endl;
        else
        {
            //cout<<"v.size() = "<<v.size()<<endl;
            for(int i=0; i<v.size()-1; i++)
            {
                cout<<v[i]<<" ";
            }
            cout<<v[v.size()-1]<<endl;
        }


    }

}

