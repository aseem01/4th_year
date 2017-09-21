#include <bits/stdc++.h>
using namespace std;
#define inf 1<<28
vector <int> G[100010];
bool visit[100010];
double res;
int BFS(int source)
{
    queue <int> Q;
   // memset(dist,inf,sizeof dist);
    Q.push(source);
    //dist[source] = 0;
    visit[source] = true;
   int check=G[Q.front()][0];
   int temp=G[Q.front()][1];
   int first=0;
   int second=0;
   int cnt=0;
   //cout<<"check = "<<check<<" temp = "<<temp<<endl;
   int flag=0;
    while(!Q.empty())
    {
        int u = Q.front();
        Q.pop();
        for(size_t i=0; i<G[u].size(); i++)
        {
            int v = G[u][i];
             if(temp==v && flag==0)
             {
                 res=cnt;
                 cnt=0;
                 flag=1;
             }
            while(!visit[v])
            {
                //dist[v] = dist[u] + 1;
                visit[v] = true;
               // parent[v] = u;
                Q.push(v);
                cnt++;
            }
        }
    }
    return cnt;
}


int main()
{
    int node;
    cin>>node;
    for(int i=0; i<node-1; i++)
    {
        int x,y;
        cin>> x >> y;
        G[x].push_back(y);
        G[y].push_back(x);
    }
    double  ans=BFS(1);
    //cout<<"res = "<<res<<endl;
    //cout<<"res = "<<res<<" ans = "<<ans<<endl;
    cout<<fixed<<setprecision(19)<<(res+ans)/2.0<<endl;
}
