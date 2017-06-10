#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,div,rat;
    while(cin>>n)
    {
        rep(i,0,n)
        {
            cin>>rat[i]>>div[i];
            if()


        }

        LL sum;
        int flag1=0;
        int flag2=0;
        int test=0;
        rep(i,0,n)
        {
            if(i==0 && div[i]==1) sum=1900;
            if(i==0 && div[i]==2) sum=1899;
            if(div[i]==1 && sum>=1900)
            {
                sum+=rat[i];
                flag2=1;
                if(div[i+1]==2)
                {
                    //sum+=rat[i+1];
                    if(sum+rat[i+1]<=1900)
                        sum=(1900-rat[i+1]+1+abs(rat[i]))
                }
                if(1900>sum && div[i+1]==1)
                {
                    test=1;
                    break;
                }
            }
            if(div[i]==2 && sum<=1899)
            {
                sum+=rat[i];
                flag1=1;
                if(div[i+1]==2)
                {
                    if()
                }
            }
        }
        if(flag1==1 && flag2==1) cout<<"Infinity"<<endl;
        else if()


    }
}

