#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,q,u,v,a,b;
    while(cin>>n>>k>>q)
    {
        map<int,int>mp;
        for(int j=0;j<n;j++)
        {
            cin>>u>>v;
            for(int i=u;i<=v;i++) mp[i]++;
        }
   for(int j=0;j<q;j++)
   {
        cin>>a>>b;
        int cnt=0;
        for(int i=a;i<=b;i++)
        {
            if(mp[i]>=2) cnt++;
        }
        cout<<cnt<<endl;
    }
    }
}
