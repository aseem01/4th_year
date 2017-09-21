#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a,b,c;
    while(cin>>a>>b>>c)
    {
        int ans=0;
        if(b>=c)
        {
        int temp=(b-c);
        ans=b-temp;
        }
        else
        {
            int k=a-b;
            if(b+k>=c) ans=b;
            else
            {
                int temp=(c%(b+k));
                ans=b-temp;
                if(c>=(b+k+b)) ans=0;
            }
        }
        cout<<ans<<endl;
    }
}

