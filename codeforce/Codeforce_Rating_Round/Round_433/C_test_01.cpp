#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef std::pair<int,int> P;
std::priority_queue<P> q;
const int N=3e5+5;
int k,n;
int c[N];
int ans[N];
int main() {
    scanf("%d%d",&n,&k);
    for(int i=1;i<=n;i++) scanf("%d",c+i);
    for(int i=1;i<=k;i++) q.push(P(c[i],i));
    cout<<"I'm here"<<endl;
    for(int i=1;i<=k;i++)
    {
        P cur=q.top();
        q.pop();
        cout<<"cost[i].first = "<<cur.first<<" cost[i].second = "<<cur.second<<endl;
    }
    cout<<"Now I'm here"<<endl;


    ll tot=0;
    for(int i=k+1;i<=n+k;i++) {
        if(i<=n) q.push(P(c[i],i));
        P cur=q.top();q.pop();
        cout<<"cost[i].first = "<<cur.first<<" cost[i].second = "<<cur.second<<endl;
        ans[cur.second]=i;
        tot+=ll(i-cur.second)*cur.first;
    }
    printf("%lld\n",tot);
    for(int i=1;i<=n;i++) printf("%d%c",ans[i],i==n?'\n':' ');
    return 0;
}
