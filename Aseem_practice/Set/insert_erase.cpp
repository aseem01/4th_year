#include<bits/stdc++.h>
using namespace std;
int main()
{
   set<int>s;
   int n,val;
   while(cin>>n)
   {
       for(int i=0;i<n;i++)
       {
           cin>>val;
           s.insert(val);
       }
       s.erase(4);
       s.erase(5);
       s.erase(6);
       set<int>::iterator it;
       for(it=s.begin();it!=s.end();it++)
       {
           cout<<*it<<endl;
           //s.erase(it);
       }
   }
}

