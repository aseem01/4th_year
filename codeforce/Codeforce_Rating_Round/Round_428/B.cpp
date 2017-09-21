#include<bits/stdc++.h>
using namespace std;
int main()
{
   int n,k,ar[100010];
   while(cin>>n>>k)
   {
       for(int i=0;i<k;i++) cin>>ar[i];
       int total=0;
       sort(ar,ar+n);
       for(int i=0;i<k;i++)
       {
           int keep=ar[i]%8;
           total+=8*(ar[i]/8);
           int temp=keep%4;
           total+=4*(keep/4);
           if(temp==2 || temp==1) total+=2;
           else if(temp>0)total+=4;
       }
       int p=0;
       if(total%8>0) p=1;
       if((total/8+p)>n) cout<<"NO"<<endl;
       else cout<<"YES"<<endl;
   }
}

