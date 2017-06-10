#include <bits/stdc++.h>
using namespace std;

typedef long long LL;

map<LL,LL>mp;
LL f[2020][2020],n;
void evenodd()
{
    LL i=1;
    mp[i++]=1;
    mp[i++]=0;
    mp[i++]=1;
    mp[i++]=0;
    mp[i++]=0;
    mp[i++]=1;
    mp[i++]=1;
}
void makematrix(LL n)
{
    LL i,j;
    LL a;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            a=i*j*i*j;
            a%=7;
            if(a==0) a=7;

           f[i][j]=mp[a];
        }
    }
}
void ans1()
{
    mp[0]=0;
    LL ans=0,i,j,k,l;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(f[i][j]!=f[n-j+1][i]) ans++;
        }
    }
    mp[90]=ans;
    ans=0;
    for(i=1,l=n;i<=n;i++,l--)
    {
        for(j=1,k=n;j<=n;j++,k--)
        {
            if(f[i][j]!=f[l][k]) ans++;
        }
    }
    mp[180]=ans;
    ans=0;

    for(i=1,k=n;i<=n;i++,k--)
    {
        for(j=1;j<=n;j++)
        {
            if(f[i][j]!=f[k][j]) ans++;
        }
    }
    mp[270]=ans;




}
void printmat()
{
    LL i,j;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            cout<<f[i][j]<<" ";
        }
        cout<<endl;
    }
}
int main()
{
    evenodd();
    LL q,ang;
    cin>>n>>q;
    makematrix(n);
    ans1();
    while(q--)
    {
        cin>>ang;
        ang%=360;
        printf("%lld\n",mp[ang]);
    }



}
