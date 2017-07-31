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
int main()
{
    //freopen("a.in", "r", stdin);
    //freopen("a.out", "w", stdout);
    LL tc,n,t=1,query;
    string s;
    cin>>tc;
    while(tc--)
    {
        cin>>s>>n;
        cout<<"Case "<<t++<<":"<<endl;
        rep(i,0,n)
        {
            cin>>query;
            int keep=query;
            string maximum="";
            string minimum="";
            int cnt3=0;
            for(int i=0;i<s.size();i++)
            {
                if(s[i]=='0') cnt3++;
            }
            string temp="";
            if(cnt3)
            {
                if(query>cnt3)
                {
                    query=query-cnt3;
                    for(int i=0;i<s.size();i++)
                    {
                        if(s[i]!='0') temp+=s[i];
                    }
                }
                else
                {
                    for(int i=0;i<s.size() && query;i++)
                    {
                        if(s[i]!='0')
                        {
                            temp+=s[i];
                        }
                        else
                        {
                            query--;
                        }
                    }
                }
            }
            if(query)
            {
            for(int i=query; i<s.size(); i++)
            {
                maximum+=temp[i];
            }
            }
            else
            {
                maximum=temp;
            }
            for(int i=0; i<s.size()-keep; i++)
            {
                minimum+=s[i];
            }
            if(query>=s.size())
            {
                cout<<"0 0"<<endl;
            }
            else
            {
                string ss="";
                string sss="";
                int flag=0;
                for(int i=0; i<maximum.size(); i++)
                {
                    if(flag==0 && maximum[i]=='0')
                    {

                    }
                    else
                        {
                            flag=1;
                            ss+=maximum[i];
                        }
                }
                int flag1=0;
                for(int i=0; i<minimum.size(); i++)
                {
                    if(flag1==0 && minimum[i]=='0')
                    {

                    }
                    else
                        {
                            flag1=1;
                            sss+=minimum[i];
                        }
                }
                int t1=0;
                int t2=0;
                if(ss.size()==0)
                {
                    t1=1;
                    ss+='0';
                }
                if(sss.size()==0)
                {
                    t2=2;
                    sss+='0';
                }

                 //if(ss==sss) cout<<ss<<endl;
                cout<<ss<<" "<<sss<<endl;
            }
        }
    }

}

