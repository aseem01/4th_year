#include<iostream>
using namespace std;
int main()
{
    int n=4;
    for(int i=1;i<=n;i++)
    {
        int j;
        for(j=1;j<=n-i;j++)
        {
            cout<<" ";
        }
        for(j=j;j<=n;j++)
        {
            cout<<"*";
        }
        for(int k=1;k<i;k++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
}
