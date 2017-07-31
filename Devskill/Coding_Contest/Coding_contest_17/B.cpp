#include<bits/stdc++.h>
using namespace std;
long long int sum(int ar[], int n)
{
    long long int ans = 0;

    // Finding sum of the array.
    for(int i=0;i<n;i++) cout<<ar[i]<<endl;
    for (int i = 0; i < n; i++)
        ans += ar[i];
   cout<<"ans = "<<ans<<endl;
    long long int power=1;
    for(int i=1; i<n; i++)
    {
        power=(power*2)%100000007;
    }
    return (ans *power)%100000007;
}

// Driven Program
int main()
{
    int n,ar[100010],tc;
    cin>>tc;
    while(tc--)
    {
        cin>>n;
        for(int i=0; i<n; i++) cin>>ar[i];
        int  p = sizeof(ar)/sizeof(ar[0]);

        cout << sum(ar, p) << endl;

    }
}
