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
vector<int>graph[300100];
int ar[100100];
int br[100100];
int visit[300010];
void BFS(int source,int n,int level[])
{
    queue<int>q;
    memset(visit,0,sizeof(visit));
    visit[source]=1;
    level[source]=0;
    q.push(source);
    while(!q.empty())
    {
        int u=q.front();
        //cout<<"u = "<<u<<endl;
        rep(i,0,graph[u].size())
        {
            int v=graph[u][i];
            //cout<<"v = "<<v<<endl;
            if(!visit[v])
            {
                visit[v]=1;
                level[v]=level[u]+1;
                q.push(v);
            }
        }
        q.pop();
    }
}
int main()
{
    //freopen("a.in", "r", stdin);
    //freopen("a.out", "w", stdout);
    int n,x,x1,y1;
    while(cin>>n>>x)
    {
        rep(i,1,n)
        {
            cin>>x1>>y1;
            graph[x1].push_back(y1);
            graph[y1].push_back(x1);
        }
        BFS(1,n,ar);
        BFS(x,n,br);
        int maximum=0;
        rep(i,2,n+1)
        {
            int a=ar[i],b=br[i];
            //cout<<"a = "<<a<<" b = "<<b<<endl;
            if(a<=b) maximum=maximum;
            else maximum=max(maximum,2*ar[i]);
            //maximum=max(maximum,max(2*a,2*b));
        }
        //cout<<max(maximum,2*ar[x])<<endl;
        cout<<maximum<<endl;
    }


}

