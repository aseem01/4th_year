#include <bits/stdc++.h>
using namespace std;
typedef vector<int> vi;
typedef vector<vi> vvi;
vi visit(1001,0);//0 not visited


void dfs(vvi &G,int x,vi &V)
{
      cout<<x<<endl;
      V[x]=1;
      vi::iterator it;
      for(it=G[x].begin();it!=G[x].end();++it){ // for(int i=0;i<G[x].size();++i)
            if(V[*it]==0)
                dfs(G,*it,V);
      }
}



int main()
{
     int v,e,x,y,i;
     cin>>v>>e;
     vvi graph(v+1);
     for(i=0;i<e;++i){
        cin>>x>>y;
        graph[x].push_back(y);
        graph[y].push_back(x);
     } // graph
     //vi visit(v+1,0);//0 not visited
     dfs(graph,1,visit);

}
