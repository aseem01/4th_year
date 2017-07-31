#include<bits/stdc++.h>
#define LL long long
using namespace std;
int main()
{
  LL n,m;
    cin>>n>>m;
    if(n<m)
    {
        cout<<"NO"<<endl;
        return 0;
    }
    if(n>m)
    {
        cout<<"YES"<<endl;
        return 0;
    }
    map<string,LL>m1,m2;
    vector<string>v1,v2;
    int i;
    string s;
    for(i=0;i<n;i++)
    {
        cin>>s;
        v1.push_back(s);
    }

    for(i=0;i<m;i++)
    {
        cin>>s;
        m1[s]++;
    }
    LL cnt=0;
    for(i=0;i<n;i++)
    {
        if(m1[v1[i]]) cnt++;
    }
    if(cnt%2) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}

