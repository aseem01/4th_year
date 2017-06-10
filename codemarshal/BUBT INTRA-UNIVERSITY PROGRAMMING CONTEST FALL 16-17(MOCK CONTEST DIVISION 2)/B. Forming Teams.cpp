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

vector<int>graph[102];
int visit[102];

int BFS(int s)
{
    queue<int>Q;
    visit[s]=0;
    Q.push(s);
    int ans=0;
    int color;
    //for(int i=0;i<10;i++) cout<<"check = "<<visit[i]<<endl;
    while(!Q.empty())
    {
        int top=Q.front();
        Q.pop();
        if(visit[top]==-2) continue;
        cout<<"visit["<<top<<"] = "<<visit[top]<<" top = "<<top<<endl;
        color=(visit[top]+1)%2;
        cout<<"color = "<<color<<endl;
        rep(i,0,graph[top].size())
        {
            int u=graph[top][i];
            cout<<"u = "<<u<<endl;
            if(visit[u]==-1) visit[u]=color,Q.push(u);
            else if(visit[u]==visit[top]) ans++,visit[top]=-2;
        }
    }
    return ans;
}


int main()
{
    //freopen("a.in", "r", stdin);
    //freopen("a.out", "w", stdout);
    int n,m,u,v;
    while(cin>>n>>m)
    {
        rep(i,0,m)
        {
            cin>>u>>v;
            graph[u].push_back(v);
            graph[v].push_back(u);
        }
        int bench=0;
        memset(visit,-1,sizeof(visit));
        rep(i,1,n+1)
        {
            if(visit[i]==-1) bench+=BFS(i);
        }

        int newTotal=n-bench;
        if(newTotal & 1) bench++;
        cout<<bench<<endl;
        rep(i,1,n+1) graph[i].clear();

    }

}
