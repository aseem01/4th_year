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
int n,p[200010],f[200010],b[200010],query,value,fc,bc,check,flag,visit[200010];
bool cmp(pair<int,int>a,pair<int,int>b)
{
    return a.first>b.first;
}
int main()
{
    //freopen("a.in", "r", stdin);
    //freopen("a.out", "w", stdout);
    vector<pair<int,int> >v1,v2,v3;
    while(cin>>n)
    {
        memset(visit,0,sizeof(visit));
        v1.clear();
        v2.clear();
        v3.clear();
        rep(i,0,n) cin>>p[i];
        rep(i,0,n)
        {
            cin>>fc;
            if(fc==1) v1.push_back(make_pair(p[i],i));
            else if(fc==2) v2.push_back(make_pair(p[i],i));
            else v3.push_back(make_pair(p[i],i));
        }
        rep(i,0,n)
        {
            cin>>bc;
            if(bc==1) v1.push_back(make_pair(p[i],i));
            else if(bc==2) v2.push_back(make_pair(p[i],i));
            else v3.push_back(make_pair(p[i],i));
        }
        sort(v1.begin(),v1.end(),cmp);
        sort(v2.begin(),v2.end(),cmp);
        sort(v3.begin(),v3.end(),cmp);
        /*cout<<"v1 sorting "<<endl;
        rep(i,0,v1.size()) cout<<v1[i].first<<" "<<v1[i].second<<endl;
        cout<<"v2 sorting"<<endl;
        rep(i,0,v2.size()) cout<<v2[i].first<<" "<<v2[i].second<<endl;
        cout<<"v3 sorting"<<endl;
        rep(i,0,v3.size()) cout<<v3[i].first<<" "<<v3[i].second<<endl;*/
        cin>>query;
        rep(i,0,query)
        {
            cin>>value;
            if(value==1)
            {
                flag=0;
                for(int j=v1.size()-1;j>=0;j--)
                {
                    check=v1[j].second;
                    if(visit[check]==0)
                    {
                        cout<<v1[j].first<<endl;
                        v1.pop_back();
                        visit[check]=1;
                        flag=1;
                        break;
                    }
                    else v1.pop_back();
                }
                if(!flag) cout<<"-1"<<endl;
            }



            if(value==2)
            {
                flag=0;
                for(int j=v2.size()-1;j>=0;j--)
                {
                    check=v2[j].second;
                    if(visit[check]==0)
                    {
                        cout<<v2[j].first<<endl;
                        visit[check]=1;
                        v2.pop_back();
                        flag=1;
                        break;
                    }
                    else v2.pop_back();
                }
                if(!flag) cout<<"-1"<<endl;
            }

            if(value==3)
            {
                flag=0;
                for(int j=v3.size()-1;j>=0;j--)
                {
                    check=v3[j].second;
                    if(visit[check]==0)
                    {
                        cout<<v3[j].first<<endl;
                        visit[check]=1;
                        v3.pop_back();
                        flag=1;
                        break;
                    }
                    else v3.pop_back();

                }
                if(!flag) cout<<"-1"<<endl;
            }
        }

    }

}

