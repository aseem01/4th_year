#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,a,b,cnt,men,total;
    while(cin>>n>>a>>b)
    {
        cnt=0;
        int f=0;
        for(int i=0;i<n;i++)
        {
            cin>>men;
            if(men==1)
            {
                if(a!=0)
                {
                    a--;
                }
                else if(b!=0)
                {
                    b--;
                    f++;
                }
                else if(f)
                {
                    f--;
                }
                else cnt++;
            }
            else
            {
                if(b!=0)
                {
                    b--;
                }
                else
                {
                    cnt+=2;
                }
            }
        }
        cout<<cnt<<endl;
    }
}

