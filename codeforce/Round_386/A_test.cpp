#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c;
    while(cin>>a>>b>>c)
    {
        while(true)
        {
            if(a*2<=b)
            {
                b=a*2;
                if(b*2<=c)
                {
                    c=b*2;
                    break;
                }
                else a--;
            }else a--;
        }
        cout<<a+b+c<<endl;
    }
}

