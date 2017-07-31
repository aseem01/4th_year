#include<bits/stdc++.h>
using namespace std;
typedef long long LL;
int main()
{
    LL n,k;
    cin>>n>>k;
    LL an=n-k;
    an=(an/k);
    an*=k;
    int kk=k;
    k<<=1;
    while(1)
    {
        LL b=n-kk;
        b/=kk;
        b*=kk;
        cout<<b<<" "<<k<<endl;
        if(an<=b)
        {
            an=b;
        }
        else break;
        k++;
    }
    if(an<n) an=n;
    cout<<an<<endl;
}
