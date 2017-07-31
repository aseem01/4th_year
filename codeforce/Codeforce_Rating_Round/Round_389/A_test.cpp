#include<bits/stdc++.h>
using namespace std;
int main()
{
    int row,col,n;
    while(cin>>row>>col>>n)
    {
        int keep=col*2;
        int coloum,rem,roww;

        if(n%keep)
        {
            coloum=n/keep+1;
            rem=n%keep;
            if(rem%2)
            {
                roww=rem/2+1;
            }
            else roww=rem/2;
        }
        else
        {
           coloum=n/keep;
           roww=col;
        }
        if(n%2) cout<<coloum<<" "<<roww<<" L"<<endl;
        else cout<<coloum<<" "<<roww<<" R"<<endl;

    }
}

