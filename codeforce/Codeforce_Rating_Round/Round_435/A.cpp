#include<bits/stdc++.h>
using namespace std;
int main()
{
   int n,k,ar[10001];
   while(cin>>n>>k)
   {
       map<int,int>mp;
       for(int i=0;i<n;i++)
       {
           cin>>ar[i];
           mp[ar[i]]=1;
       }
       int cnt=0;
       for(int i=0;i<k;i++)
       {
           if(mp[i]==0) cnt++;
       }
       if(mp[k]==1) cnt+=1;
       cout<<cnt<<endl;
   }

}

