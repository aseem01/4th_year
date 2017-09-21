#include<iostream>
#include<vector>
#include<queue>
#include<cstdio>
#define max 100010

using namespace std;

bool find_cycle(vector<int> adjacency_list[]);

int main(void)
{
    //freopen("input.txt","r",stdin);
//freopen("output.txt","w",stdout);

    int vertex, edge;
    vector<int> adjacency_list[max];

    cin >> vertex;

//Creating the adjacency list
    for(int i=1; i<vertex; i++)
    {
        int n1, n2;
        cin >> n1 >> n2;


        adjacency_list[n1].push_back(n2);
        adjacency_list[n2].push_back(n1);
    }

    if(vertex==1 || vertex==2)
        {
            cout<<"0"<<endl;
            return 0;
        }
    if(find_cycle(adjacency_list)) cout<<"0"<<endl;
    else cout<<vertex-3<<endl;

    return 0;
}

bool find_cycle(vector<int> adjacency_list[])
{
    queue<int> q;
    bool taken[max]= {false};
    int parent[max];

    q.push(1);
    taken[1]=true;
    parent[1]=1;

//breadth first search
    while(!q.empty())
    {
        int u=q.front();
        q.pop();

        for(int i=0; i<adjacency_list[u].size(); i++)
        {
            int v=adjacency_list[u][i];

            if(!taken[v])
            {
                q.push(v);
                taken[v]=true;
                parent[v]=u;
            }
            else if(v!=parent[u]) return true;
        }
    }

    return false;
}
