#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,k,maximum,minimum,baki,parbe;
    while(cin>>n>>k)
    {
        if(k==0)
        {
            cout<<"0 0"<<endl;
            continue;
        }
        if(n==k) minimum=0;
        else minimum=1;

        baki=n-k;
        if(k*2<=baki) maximum=k*2;
        else maximum=baki;
        /*parbe=baki/k;
        if(parbe==0) maximum=baki;
        else if(parbe==1)
        {
            if(baki%k==0) maximum=parbe*k;
            else maximum=parbe*k+1;
        }
        else
        {
            maximum=k*2;
        }*/
        cout<<minimum<<" "<<maximum<<endl;
    }
}

