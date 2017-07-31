#include<bits/stdc++.h>
using namespace std;
int main()
{
     long long int tc,n,query,t=1;
     string s;
     cin>>tc;
     while(tc--)
     {
         cin>>s>>n;
         cout<<"Case "<<t++<<":"<<endl;
         for(int pp=0;pp<n;pp++)
         {
             cin>>query;
             if(query==s.size()) cout<<"0 0"<<endl;
             else
             {
                 string temp=s;
                 long long int maximum=0;
                 long long int minimum=2000000000100;
                 for(int i=0;i<s.size();i++)
                 {
                     for(int j=i;j<s.size();j++)
                     {
                         if(j+query<=s.size())
                         {
                             for(int k=j;k<query+j;k++)
                         {
                             s[k]='a';
                         }

                         long long int num=0;
                         for(int p=0;p<s.size();p++)
                         {
                             if(s[p]!='a') num=num*10+(s[p]-'0');
                         }



                        maximum=max(maximum,num);
                        minimum=min(minimum,num);
                         s=temp;
                         }
                     }
                     //cout<<s<<endl;
                 }
                 if(minimum==2000000000100) minimum=0;
                 cout<<maximum<<" "<<minimum<<endl;
             }
         }
     }

}


