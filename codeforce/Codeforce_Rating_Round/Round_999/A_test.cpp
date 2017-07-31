#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,ar[100010];
    while(cin>>n)
    {
        int cnt=0;
        vector<int>v;
        for(int i=0;i<n;i++)
        {
            cin>>ar[i];
        }
        sort(ar,ar+n);
        int x=ar[0];
        int y=ar[n-1];
        for(int i=0;i<n;i++)
        {
            if(ar[i]!=x && ar[i]!=y) v.push_back(ar[i]);
        }
        cout<<v.size()<<endl;
    }
}

