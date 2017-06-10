#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a,b,ar[100001];
    string s;
    while(cin>>n>>a>>b)
    {
        cin>>s;
        for(int i=0;i<n;i++)
        {
            ar[i]=s[i]-'0';
        }
        if(ar[a-1]==ar[b-1]) cout<<"0"<<endl;
        else
        {

            cout<<"1"<<endl;
        }
    }
}

