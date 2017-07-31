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

template<typename T> T BigMod(T b,T p,T m) //BigMod Calculation
{
    T r=1;
    while(p)
    {
        if(p&1)r=(r*b)%m;
        b=(b*b)%m;
        p>>=1;
    }
    return r;
}

//||--------------------------->||Main_Code_Start_From_Here||<---------------------------------||
int main()
{
    //freopen("a.in", "r", stdin);
    //freopen("a.out", "w", stdout);
    int n,low,highest,diff,ar[25];
    while(cin>>n>>low>>highest>>diff)
    {
        rep(i,0,n) cin>>ar[i];
        LL cnt=0;
        vector<int>v;
        rep(i,0,pow(2,n))
        {
            v.clear();
            rep(j,0,n)
            {
                if((i & (1<<j))) v.push_back(ar[j]);
            }
            // LL sum=0;
            //for(int t=0;t<v.size();t++) cout<<"check = "<<v[t]<<endl;
            if(v.size()>=2)
            {
                sort(v.begin(),v.end());
                LL sum=0;
                rep(k,0,v.size())
                {
                sum+=v[k];
                }
                if(sum>=low && sum<=highest && (abs(v[0]-v[v.size()-1])>=diff))
                    cnt++;
                //}
            }
            //cout<<"cnt = "<<cnt<<endl;
            //cout<<"-----------end-------------"<<endl;
        }
        cout<<cnt<<endl;
    }

}
