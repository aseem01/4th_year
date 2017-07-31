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
vector<vector<int> >GRAPH(50001);
map<int,int>mp;
int res=0;
inline void print_path(vector<int>path)
{
    int cnt=0;
    for(int i=0; i<path.size(); ++i)
    {
        for(int j=i+1; j<path.size(); j++)
        {
            if(__gcd(mp[path[i]],mp[path[j]])==1) cnt++;
        }
    }
    cout<<cnt<<endl;
}
bool isadjacency_node_not_present_in_current_path(int node,vector<int>path)
{
    int cnt=0,res;
    for(int i=0; i<path.size(); ++i)
    {
        // cout<<"pathhh = "<<path[i]<<endl;
        if(i!=0)
        {
            if(__gcd(mp[path[i-1]],mp[path[i]])==1) cnt++;
        }
        if(path[i]==node)
            return false;
    }
    res+=cnt;
    return true;
}
int BFS(int source,int target,int totalnode,int totaledge )
{
    vector<int>path;
    path.push_back(source);
    queue<vector<int> >q;
    q.push(path);

    while(!q.empty())
    {
        path=q.front();
        //for(int i=0; i<path.size(); i++)
            //cout<<"path = "<<path[i]<<endl;
        q.pop();

        int last_nodeof_path=path[path.size()-1];
        if(last_nodeof_path==target)
        {
            //print_path(path);
            cout<<res<<endl;
            res=0;
        }

        for(int i=0; i<GRAPH[last_nodeof_path].size(); ++i)
        {
            //cout<<"check = "<<GRAPH[last_nodeof_path][i]<<endl;
            if(isadjacency_node_not_present_in_current_path(GRAPH[last_nodeof_path][i],path))
            {

                vector<int>new_path(path.begin(),path.end());
               // cout<<"last = "<<GRAPH[last_nodeof_path][i]<<endl;
                new_path.push_back(GRAPH[last_nodeof_path][i]);
                q.push(new_path);
            }
        }

    }
    return 1;
}
int main()
{
    //freopen("a.in", "r", stdin);
    //freopen("a.out", "w", stdout);
    int n,q,x,y,value,u,v;
    while(cin>>n>>q)
    {
        rep(i,0,n)
        {
            cin>>value;
            mp[i+1]=value;
        }
        rep(i,0,n-1)
        {
            cin>>x>>y;
            GRAPH[x].push_back(y);
            GRAPH[y].push_back(x);
        }
        rep(i,0,q)
        {
            cin>>u>>v;
            BFS(u,v,n,n-1);
        }
    }


}
