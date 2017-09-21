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
    LL test,n,m,sa[100010],salary,job;
    cin>>test;
    string s[100010];
    while(test--)
    {
        cin>>n>>m;
        vector<pair<int,int> > v;
        map<int,int>mp;
        rep(i,0,n)
        {
            cin>>sa[i];
            mp[i]=sa[i];
        }
        rep(i,0,m)
        {
            cin>>salary>>job;
            v.push_back(make_pair(salary,job));
        }
        //rep(i,0,m) cout<<v[i].first<<" "<<v[i].second<<endl;
        LL total=0;
        LL cnt=0;
        LL visit[100010];
        memset(visit,0,sizeof(visit));
        LL ans=0;
        rep(i,0,n)
        {
            cin>>s[i];
            int flag=0;
            int maximum=0;
            int res;
            for(int j=0; j<s[i].size(); j++)
            {
                if(s[i][j]=='1')
                {
                    for(int k=j; k<m; k++)
                    {
                        if((mp[i]<=v[j].first) && (v[j].second!=0))
                        {
                            if(maximum<v[j].first)
                            {
                                maximum=v[j].first;
                                res=j;
                                flag=1;
                            }


                        }
                    }
                    //if(flag) break;
                }
                //if(flag) break;
            }
            //cout<<"res = "<<res<<endl;
            //cout<<"v[res].first = "<<v[res].first<<endl;
//



            if(flag)
            {

            if(!visit[res])
            {
                cnt++;
                visit[res]++;
            }
            // cout<<"v[j].second = "<<v[j].second<<endl;
            total+=v[res].first;
            // cout<<"total = "<<total<<endl;
            v[res].second=v[res].second-1;
            ans++;
            }
            //flag=1;
            //break;


        }

        cout<<ans<<" "<<total<<" "<<m-cnt<<endl;

    }

}

