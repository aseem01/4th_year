#include<bits/stdc++.h>
using namespace std;
unsigned int gcd (unsigned int a, unsigned int b)
    {
      unsigned int x;
      while (b)
        {
          x = a % b;
          a = b;
          b = x;
        }
      return a;
    }
int main()
{
   int n;
   while(cin>>n)
   {
       int flag=0;
       int aa,bb;
       for(int i=n;i>=1;i--)
       {
           for(int j=n;j>i;j--)
           {
              int check=gcd(i,j);
               if(check==1)
               {
               if(i+j==n)
               {
                   aa=i;
                   bb=j;
                   flag=1;
               }
               if(flag) break;
               }
           }
           if(flag) break;
       }
       cout<<aa<<" "<<bb<<endl;
   }
}

