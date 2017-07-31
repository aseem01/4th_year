#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
int main()
{
    LL n;
    int l,r;
    cin>>n>>l>>r;
    vector<int>v1,v2;
    while(n>1)
    {
        v1.push_back(n%2);
        n/=2;
    }
    int ll=v1.size();
    ll--;
    string s="";
    if(v1[ll]==0)
    {
        s='0';
    }
    else s='1';
    if(n==1)
    {
        s='1'+s+'1';
    }
    else s='0'+s+'0';
    for(int i=ll-1; i>=0; i--)
    {
        if(v1[i]==0) s=s+'0'+s;
        else s=s+'1'+s;
    }
    int cnt=0;
    for(int j=l-1; j<r; j++)
    {
        if(s[j]=='1') cnt++;
    }
    cout<<cnt<<endl;

}
