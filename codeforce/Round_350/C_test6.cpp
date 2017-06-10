#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
struct st
{
    ll a,b,c;
};
bool cmp( st x, st y)
{
    cout<<"x = "<<x.a<<" y = "<<y.a<<endl;
    if(x.a>y.a)return true;
    if(x.a==y.a)
    {
        if(x.b>y.b)return true;
    }
    return false;
}
map <ll,ll> cnt;
ll i,j,k,l,n,m,ar[200010],ln[200010],sub[200010];
st ans[200010];
int main()
{


    cin>>n;
    for(i=1; i<=n; i++)
    {
        cin>>ar[i];
        cnt[ar[i]]++;
    }
    cin>>m;
    for(i=1; i<=m; i++)
    {
        cin>>ln[i];
    }
    for(i=1; i<=m; i++)
    {
        cin>>sub[i];
    }
    ll cans=0,p=0;
    for(i=1; i<=m; i++)
    {
        //if(cnt[ln[i]]>=cans)
        //{
        //cans=cnt[ln[i]];
        ans[p++]= {cnt[ln[i]],cnt[sub[i]],i};
        // }
    }


    for(i=1; i<=m; i++)
    {
        cout<<"a = "<<ans[i].a<<" b = "<<ans[i].b<<" c = "<<ans[i].c<<endl;
    }

    sort(ans,ans+p,cmp);



    cout<<"After sort "<<endl;

    for(i=1; i<=m; i++)
    {
        cout<<"a = "<<ans[i].a<<" b = "<<ans[i].b<<" c = "<<ans[i].c<<endl;
    }




    cout<<ans[0].c<<endl;


}
