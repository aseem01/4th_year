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
int weight[1005];
int main()
{
    //freopen("a.in", "r", stdin);
    //freopen("a.out", "w", stdout);
     int n,m,k,x,y;
     while(cin>>n>>m>>k)
     {
         vector<pair<int,int> > v[n+1];
         rep(i,1,n+1) cin>>weight[i];
         rep(i,1,m+1)
         {
            cin>>x>>y;
            //cout<<"x = "<<x<<" y = "<<y<<endl;
             v[x].push_back(make_pair(weight[y],y));
             v[y].push_back(make_pair(weight[x],x));
         }
        /*rep(i,1,n+1)
         {
             cout<<"starting for i index checking "<<i<<": "<<endl;
             rep(j,0,v[i].size())
             //cout<<v[i].size()<<endl;
             cout<<v[i][j].first<<" "<<v[i][j].second<<endl;
         }*/

         rep(i,1,n+1) sort(v[i].begin(),v[i].end());

         /*rep(i,1,n+1)
         {
             cout<<"start "<<i<<": "<<endl;
             rep(j,0,v[i].size())
             cout<<v[i][j].first<<" "<<v[i][j].second<<endl;
         }*/

         rep(i,1,n+1)
         {
             if(v[i].size()>=k) cout<<v[i][v[i].size()-k].second<<endl;
             else cout<<"-1"<<endl;
         }

     }

}
