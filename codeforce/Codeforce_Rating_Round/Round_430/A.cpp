#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int L,r,x,y,k,res;
    while(cin>>L>>r>>x>>y>>k)
    {
        int flag=0;
        /*for(int i=L; i<=r; i++)
        {
            res=i*k;
            if(res>=x && res<=y)
            {
                flag=1;
                break;
            }
        }*/



        for(int i=x; i<=y; i++)
        {
            res=i*k;
            if(res>=L && res<=r)
            {
                flag=1;
                break;
            }
        }


        if(flag) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}

