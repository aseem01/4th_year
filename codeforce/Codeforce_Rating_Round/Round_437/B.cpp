#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,total,x,y,z,sum1,sum2;
    while(cin>>n>>total)
    {
        sum1=0;
        sum2=0;
        for(int i=0;i<n;i++)
        {
            cin>>x>>y>>z;
            sum1+=(x*y);
            sum2+=(x*z);
        }
        cout<<max(sum1,sum2)<<endl;
    }
}

