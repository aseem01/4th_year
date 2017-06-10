#include <bits/stdc++.h>
using namespace std;
#define all(s) (s).begin(),(s).end()
typedef long long LL;
int main()
{
    int n;
    cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;++i) cin>>a[i];
    sort(all(a));
    for(int i=2;i<n;++i)
    {
        if(a[i-2]+a[i-1]>a[i])
        {
        cout<<"YES"<<endl;
        return 0;
        }
    }
    cout<<"NO"<<endl;
    return 0;
}
