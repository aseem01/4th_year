#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,t,k,d;
    while(cin>>n>>t>>k>>d)
    {
        int sum=0;
        if(n%k==0) sum+=n/k;
        else sum+=n/k+1;
        int keep=sum*t;
        if(keep-d>t) cout<<"YES"<<endl;
            else cout<<"NO"<<endl;

    }
}

