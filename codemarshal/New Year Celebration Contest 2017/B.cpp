#include<bits/stdc++.h>
#define maxn 800005
using namespace std;

int t;
int n,m,x,y,start,stop,ans=0;
int c[maxn];
bool vis[maxn];
bool found;
vector<vector<int> >v;

void cuda_cudi(int source, int counter)
{
    if(source==stop)
    {
        found=true;
        ans=max(ans,c[stop]-counter);
        return;
    }
    if(vis[source])
    return;
    vis[source]=true;
    int sz=v[source].size();
    for(int j=0;j<sz;j++)
    cuda_cudi(v[source][j],counter+1);
}

int main()
{
    cin>>t;
    for(int i=1; i<=t; i++)
    {
        found=false;
        v.clear();
        ans=-INT_MAX;
        memset(vis,false,sizeof vis);
        scanf("%d%d",&n,&m);
        for(int j=0;j<m;j++)
        scanf("%d",&c[j]);
        v.resize(m);
        for(int j=0;j<n;j++)
        {
            scanf("%d%d",&x,&y);
            x--,y--;
            v[x].push_back(y);
            v[y].push_back(x);
        }
       scanf("%d%d",&start,&stop);
        start--,stop--;
        cuda_cudi(start,0);
        if(!found)
        {
            cout<<"Case "<<i<<": Path not found"<<endl;
            continue;
        }
        else if(ans<0)
        {
            cout<<"Case "<<i<<": Don't travel"<<endl;
            continue;
        }
        cout<<"Case "<<i<<": "<<ans<<endl;
    }
    return 0;
}
