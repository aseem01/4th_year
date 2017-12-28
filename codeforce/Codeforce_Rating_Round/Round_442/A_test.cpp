#include<bits/stdc++.h>
using namespace std;
int main()
{
   string s;
   int zero,one;
   while(cin>>s)
   {
       int flag=0;
       one=0;
       zero=0;
       int no=0;
       for(int i=0;i<s.size();i++)
       {
           if(s[i]=='1') flag=1;
           if(flag)
           {
               if(s[i]=='1')one++;
               if(s[i]=='0')zero++;
           }
           else no++;
       }
       //cout<<"one = "<<one<<" zero = "<<zero<<endl;
       if(one>=1 && zero>=6) cout<<"yes"<<endl;
       /*else if(one>1 && zero==6) cout<<"yes"<<endl;
       else if(one==1 && zero>6) cout<<"yes"<<endl;
       else if(one==1 && zero==6) cout<<"yes"<<endl;
       //else if(no>=1 && one==1 && zero>6) cout<<"yes"<<endl;
       //else if(no>=1 && one>1 && zero==6) cout<<"yes"<<endl;*/
       else cout<<"no"<<endl;
   }
}

