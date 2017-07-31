#include <bits/stdc++.h>
using namespace std;
#define inf 1<<28
vector <int> G[200010];
int dist[200010];
//int parent[100];
int distance[200010];
bool visit[200010];
int BFS(int source, int destination)
{
    queue <int> Q;
    memset(dist,inf,sizeof dist);
    Q.push(source);
    dist[source] = 0;
    visit[source] = true;

    while(!Q.empty())
    {
        int u = Q.front();
        Q.pop();
        for(size_t i=0; i<G[u].size(); i++)
        {
            int v = G[u][i];

            while(!visit[v])
            {
                dist[v] = dist[u] + 1;
                visit[v] = true;
               // parent[v] = u;
                Q.push(v);
            }
        }
    }
    return dist[destination];
}
int main()
{
    int node,edge;
    cin>>node>>edge;
    for(int i=0; i<edge; i++)
    {
        int x,y;
        cin>> x >> y;
        G[x].push_back(y);
        G[y].push_back(x);
    }

    int s,d;
    s=1;
    d=node;
    int ans=BFS(s,d);
   // cout<<"ans = "<<ans<<endl;
    if(ans==0 || ans>2) cout<<"IMPOSSIBLE"<<endl;
    else cout<<"POSSIBLE"<<endl;
}
