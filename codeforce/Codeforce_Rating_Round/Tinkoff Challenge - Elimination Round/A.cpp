#include<bits/stdc++.h>
using namespace std;
int main()
{
   long long int n,k,ar[100010],minimum,sum;
   while(cin>>n>>k)
   {
       int flag=0;
       minimum=20000000000;
       for(int i=0;i<n;i++)
       {
           cin>>ar[i];
           minimum=min(minimum,ar[i]);
           //if(ar[i]%k!=0)flag=1;
       }
       sum=0;
       for(int i=0;i<n;i++)
       {
           if((ar[i]-minimum)%k==0)
           sum+=(ar[i]-minimum)/k;
           else flag =1;
       }
       if(flag) cout<<"-1"<<endl;
       else cout<<sum<<endl;
   }
}

