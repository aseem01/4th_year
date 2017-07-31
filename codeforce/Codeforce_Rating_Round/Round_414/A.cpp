#include<bits/stdc++.h>
using namespace std;
int main()
{
   int a,b,c,m,ar[100010],value;
   while(cin>>a>>b>>c)
   {
       vector<int>v;
       map<int,int>mp;
       cin>>m;
       for(int i=0;i<m;i++)
       {
           cin>>value;
           //if(mp[value]==0)
           //{
               v.push_back(value);
               mp[value]++;
           //}
       }
       int cnt=0;
       for(int i=0;i<v.size();i++)
       {
           //cout<<"v[i] = "<<v[i]<<endl;
           if(b<v[i] && v[i]<c) cnt++;
       }
       cout<<cnt<<endl;

   }
}

