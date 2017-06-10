#include<bits/stdc++.h>
using namespace std;
typedef long long LL;
int main()
{
    LL n,ar[1001];
    while(cin>>n)
    {
        LL sum=0;
        for(int i=0;i<n;i++)
        {
            cin>>ar[i];
            sum+=ar[i];
        }
        sort(ar,ar+n);
        LL keep=ar[n-1];
        cout<<keep*n-sum<<endl;

    }
}

