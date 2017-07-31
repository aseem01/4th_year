#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    int r=0,b=0,y=0,g=0;
    cin>>s;
    int i,j,k;
    int l=s.length();
    for(i=0;i<l;i++)
    {
        if(s[i]=='R') r=i;
        if(s[i]=='B') b=i;
        if(s[i]=='Y') y=i;
        if(s[i]=='G') g=i;
    }
    r%=4;
    b%=4;
    y%=4;
    g%=4;
    map<int,int>m;
    int a;
    for(i=0;i<l;i++)
    {
        if(s[i]=='!')
        {
           a=i%4;
           m[a]++;
        }
    }
    cout<<m[r]<<" "<<m[b]<<" "<<m[y]<<" "<<m[g]<<endl;



}
