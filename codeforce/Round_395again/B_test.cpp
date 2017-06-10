#include <bits/stdc++.h>
using namespace std;


typedef long long LL;
LL prime[1000001];

int main()
{
    LL i,n,t;
    cin>>n;
    LL a[n+1];
    for(i=1; i<=n; i++) cin>>a[i];
    int nn=n>>1;
    for(i=1; i<=nn; i+=2) swap(a[i],a[n-i+1]);
    for(i=1; i<=n; i++) cout<<a[i]<<" ";


}
