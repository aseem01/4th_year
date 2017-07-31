#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s1,s2;
    while(cin>>s1>>s2)
    {
        int len=s1.size();
        sort(s1.begin(),s1.end());
        sort(s2.begin(),s2.end());
        //cout<<"s1 = "<<s1<<endl;
        //cout<<"s2 = "<<s2<<endl;
        reverse(s2.begin(),s2.end());
        //cout<<"s22 = "<<s2<<endl;
        string s="";
        int k=0,p=0;
        for(int i=1;i<=len;i++)
        {
           if(i%2)
           {
               s+=s1[k];
               k++;
           }
           else
           {
               s+=s2[p];
               p++;
           }
        }
        cout<<s<<endl;
    }
}

