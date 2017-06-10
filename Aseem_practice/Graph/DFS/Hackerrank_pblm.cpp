#include<bits/stdc++.h>
using namespace std;

int N,M,Cl,Cr;
int cnt;
vector<int>adj[100005];
bool vis[100005];

void dfs(int u)
{
    int i, l = adj[u].size();
    cnt++;
    vis[u] = 1;
    for(i=0; i<l; i++){
        int v = adj[u][i];
        if(!vis[v])  dfs(v);
    }
}

int main()
{
    int T,i,j,k;

    scanf("%d",&T);

    while(T--){
        scanf("%d%d%d%d",&N,&M,&Cl,&Cr);
        for(i=1; i<=N; i++)  adj[i].clear();

        for(i=0; i<M; i++){
            int a,b;
            scanf("%d%d",&a,&b);
            adj[a].push_back(b);
            adj[b].push_back(a);
        }

        if(Cl <= Cr){
            long long ans = (long long)Cl*(long long)N;
            cout<<ans<<endl;
        }

        else{
            long long ans = 0;
            memset(vis,0,sizeof(vis));

            for(i=1; i<=N; i++){
                if(!vis[i]){
                    cnt = 0;
                    dfs(i);
                    ans += Cl;
                    ans += (long long) (Cr)*(long long)(cnt-1);
                }
            }

            cout<<ans<<endl;
        }

    }
    return 0;
}

