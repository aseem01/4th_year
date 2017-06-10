#include <stdio.h>
#include <vector>
#include <algorithm>
#include <vector>
#include <queue>
#include <iostream>
using namespace std;
vector<vector<int> >GRAPH(100);
inline void print_path(vector<int>path)
{
    //cout<<"[ ";
    for(int i=0;i<path.size();++i)
    {
        cout<<path[i]<<" ";
    }
    //cout<<"]"<<endl;
}
bool isadjacency_node_not_present_in_current_path(int node,vector<int>path)
{
    for(int i=0;i<path.size();++i)
    {
        if(path[i]==node)
        return false;
    }
    return true;
}
int findpaths(int source ,int target ,int totalnode,int totaledge )
{
    vector<int>path;
    path.push_back(source);
    queue<vector<int> >q;
    q.push(path);

    while(!q.empty())
    {
        path=q.front();
        q.pop();

        int last_nodeof_path=path[path.size()-1];
        if(last_nodeof_path==target)
        {
            cout<<"The Required path is:: ";
            print_path(path);
        }
        else
        {
            print_path(path);
        }

        for(int i=0;i<GRAPH[last_nodeof_path].size();++i)
        {
            if(isadjacency_node_not_present_in_current_path(GRAPH[last_nodeof_path][i],path))
            {

                vector<int>new_path(path.begin(),path.end());
                new_path.push_back(GRAPH[last_nodeof_path][i]);
                q.push(new_path);
            }
        }




    }
    return 1;
}
int main()
{
    //freopen("out.txt","w",stdout);
    int T,N,M,u,v,source,target;
    scanf("%d",&T);
    while(T--)
    {
        printf("Enter Total Nodes & Total Edges\n");
        scanf("%d%d",&N,&M);
        for(int i=1;i<=M;++i)
        {
            scanf("%d%d",&u,&v);
            GRAPH[u].push_back(v);
            GRAPH[v].push_back(u);
        }
        printf("(Source, target)\n");
        scanf("%d%d",&source,&target);
        findpaths(source,target,N,M);
    }
    //system("pause");
    return 0;
}

/*
Input::
1
6 11
1 2
1 3
1 5
2 1
2 3
2 4
3 4
4 3
5 6
5 4
6 3
1 4

output:
[ 1 ]
[ 1 2 ]
[ 1 3 ]
[ 1 5 ]
[ 1 2 3 ]
The Required path is:: [ 1 2 4 ]
The Required path is:: [ 1 3 4 ]
[ 1 5 6 ]
The Required path is:: [ 1 5 4 ]
The Required path is:: [ 1 2 3 4 ]
[ 1 2 4 3 ]
[ 1 5 6 3 ]
[ 1 5 4 3 ]
The Required path is:: [ 1 5 6 3 4 ]


*/

