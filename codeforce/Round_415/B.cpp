#include<bits/stdc++.h>
using namespace std;
int main()
{
   long long int n,f,ar[100010],br[100010];
   while(cin>>n>>f)
   {
       long long int  ache,keep,sum,x,y;
       sum=0;
       for(int i=0;i<n;i++)
       {
           cin>>x>>y;
           ache=min(x,y);
           keep=min(2*x,y);
           sum+=ache;
           br[i]=keep-ache;
       }
       sort(br,br+n);
       for(int i=n-1;i>=(n-f);i--)
       {
           sum+=br[i];
       }
       cout<<sum<<endl;
   }
}

