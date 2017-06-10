#include <bits/stdc++.h>
using namespace std;
#define inf 1<<28
vector <int> G[200001];
int dist[200001];
int parent[200001];
int distance[200001];
bool visit[200001];
int BFS(int source, int destination,int libray_cost,int road_cost)
{
    queue<int>Q;
    memset(dist,inf,sizeof dist);
    Q.push(source);
    dist[source] = 0;
    visit[source] = true;
    int keep=0;
    int sum=0;
    int flag=0;
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

                sum+=road_cost;
                keep+=road_cost;
                if(keep>libray_cost)
                {
                    sum+=libray_cost;
                    keep=0;
                    flag=1;
                }
                visit[v] = true;
                parent[v] = u;
                Q.push(v);
            }
        }
    }
    if(flag) return sum;
    else return sum+libray_cost;
}


int main()
{
    int node,edge,test;
    int libray_cost,road_cost;
    cin>>test;
    while(test--)
    {
    cin>>node>>edge>>libray_cost>>road_cost;
    for(int i=0; i<edge; i++)
    {
        int x,y;
        cin>> x >> y;
        G[x].push_back(y);
        G[y].push_back(x);
    }
    if(libray_cost<road_cost)
    {
        cout<<node*libray_cost<<endl;
        continue;
    }
    cout<<BFS(1,node,libray_cost,road_cost)<<endl;
    memset(visit,0,sizeof(visit));
    memset(G,0,sizeof(G));
    }
}
