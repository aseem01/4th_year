#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,ar[100010];
    while(cin>>n)
    {
        for(int i=0;i<n;i++) cin>>ar[i];
        int t=0;
        for(int i=n-1;i>=0;i--)
        {
            cout<<"tt = "<<ar[n-i-1]<<" = "<<i+1<<endl;
            if(ar[n-i-1]==i+1)
            {
                cout<<i+1<<endl;
                cout<<"t = "<<t<<endl;
                int p=i+1;
                while(t)
                {
                    cout<<p<<endl;
                    p--;
                    t--;
                }
                t=0;
            }
            else
            {
                cout<<" "<<endl;
                t++;
            }
        }
    }
}

