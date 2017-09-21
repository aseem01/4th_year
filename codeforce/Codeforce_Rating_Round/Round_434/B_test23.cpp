#include<iostream>
#include<vector>
#include<queue>
#include<cstdio>
#define max 1000

using namespace std;

bool find_cycle(vector<int> adjacency_list[]);

int main(void)
{
     //freopen("input.txt","r",stdin);
//freopen("output.txt","w",stdout);

int vertex, edge;
vector<int> adjacency_list[max];

cin >> vertex >> edge;

//Creating the adjacency list
for(int i=1; i<edge; i++)
{
    int n1, n2;
    cin >> n1 >> n2;

    adjacency_list[n1].push_back(n2);
    adjacency_list[n2].push_back(n1);
}

if(find_cycle(adjacency_list))
    cout << "There is a cycle in the graph" << endl;
else cout << "There is no cycle in the graph" << endl;

return 0;
}
