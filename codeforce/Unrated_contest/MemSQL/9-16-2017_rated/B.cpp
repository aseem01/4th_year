#include<bits/stdc++.h>
using namespace std;
int main()
{
   long long int sum,k,ache, n;
    while(cin>>n)
    {
         k=sqrt(n);
         sum=k*4;
         ache=n-k*k;
         if(ache==0) sum+=0;
         else if(ache>k) sum+=4;
         else sum+=2;
         cout<<sum<<endl;

    }
}

