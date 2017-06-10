#include<bits/stdc++.h>
using namespace std;
int main()
{
   int n,a,b,aa,bb;
   while(cin>>n)
   {
       int minimum=10000000000000;
       for(int i=1;i<=n;i++)
       {
           a=i;
           b=n/i;
           if(a*b==n)
           {
               int temp=abs(a-b);
               if(minimum>temp)
               {
                   minimum=temp;
               aa=a;
               bb=b;
               }
           }
       }
       cout<<aa<<" "<<bb<<endl;
   }
}

