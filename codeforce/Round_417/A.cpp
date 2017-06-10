#include<bits/stdc++.h>
using namespace std;
int main()
{
    int ar[4][4];
    for(int i=0;i<4;i++)
    {
        for(int j=0;j<4;j++)
        cin>>ar[i][j];
    }
    int flag=0;
    if(ar[0][3]==1 && (ar[0][0]==1 || ar[0][1]==1 || ar[0][2]==1)) flag=1;
    if(ar[1][3]==1 && (ar[1][0]==1 || ar[1][1]==1 || ar[1][2]==1)) flag=1;
    if(ar[2][3]==1 && (ar[2][0]==1 || ar[2][1]==1 || ar[2][2]==1)) flag=1;
    if(ar[3][3]==1 && (ar[3][0]==1 || ar[3][1]==1 || ar[3][2]==1)) flag=1;
    if(flag) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;

}

