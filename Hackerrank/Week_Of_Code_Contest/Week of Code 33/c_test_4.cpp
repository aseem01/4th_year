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
long long gcd(long long a, long long b) {
  while (b != 0) {
    long long t = a % b;
    a = b;
    b = t;
  }
  return a;
}

//||--------------------------->||Main_Code_Start_From_Here||<---------------------------------||
vector<int>graph[100010];
int ar[100010];
int color[100010];
//int LPS[1001][1001];
void BFS(int source)
{
    //cout<<"source = "<<source<<endl;
    color[source]=source;
    queue<int>Q;
    Q.push(source);
    while(!Q.empty())
    {
       int u=Q.front();
       //cout<<"u = "<<u<<endl;
       for(int i=0;i<graph[u].size();i++)
       {
           int v=graph[u][i];
           //cout<<"u = "<<u<<" i = "<<i<<" v = "<<v<<endl;
           if(!color[v])
           {
               color[v]=source;
               Q.push(v);
           }
       }
       Q.pop();
    }
}
/*int lps(int ar[],int len)
{
    for(int i=0;i<len;i++) LPS[i][i]=1;
    for(int i=2;i<=len;i++)
    {
        for(int j=0;j<len-i+1;j++)
        {
            int k=i+j-1;
            if(ar[j]==ar[k])
            {
                if(i==2) LPS[j][k]=2;
                else LPS[j][k]=LPS[j+1][k-1];
            }
            else
            {
                LPS[j][k]=max(LPS[j][k-1],LPS[j+1][k]);
            }
        }
    }
    return LPS[0][len-1];
}*/
int lps[1001][1001];
int LPS(int ar[],int len)
{
    for(int i=0; i<len; i++) lps[i][i]=1;
    for(int i=2; i<=len; i++)
    {
        for(int j=0; j<len-i+1; j++)
        {
            int k=j+i-1;
            if(ar[j]==ar[k])
            {
                if(i==2) lps[j][k]=2;
                else lps[j][k]=lps[j+1][k-1]+2;
            }
            else lps[j][k]=max(lps[j][k-1],lps[j+1][k]);
        }
    }
    return lps[0][len-1];
}
int main()
{
    //freopen("a.in", "r", stdin);
    //freopen("a.out", "w", stdout);
    int node,edge,len,u,v;
    while(cin>>node>>edge>>len)
    {
        rep(i,0,edge)
        {
            cin>>u>>v;
            graph[u].push_back(v);
            graph[v].push_back(u);
        }


        for(int i=1;i<=node;i++)
        {
            if(!color[i])
            {
                BFS(i);
            }
        }

        for(int i=0;i<len;i++)
        {
            cin>>ar[i];
            ar[i]=color[ar[i]];
            //cout<<"ar[i] = "<<color[ar[i]]<<endl;
        }
        cout<<LPS(ar,len)<<endl;



    }

}

