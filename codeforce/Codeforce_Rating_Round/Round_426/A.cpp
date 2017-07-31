#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    string s;
    while(cin>>n>>k)
    {
         cin>>s;
         map<char,int>mp,mp1;
         for(int i=0;i<s.size();i++) mp[s[i]]++;
       int cnt=0;
       for(int i=0;i<s.size();i++)
       {
           if(mp1[s[i]]==0) cnt++;
           mp1[s[i]]++;
           if(cnt>k) break;
           if(mp[s[i]]==mp1[s[i]]) cnt--;


       }
       if(cnt>k) cout<<"YES"<<endl;
       else cout<<"NO"<<endl;
       //cout<<cnt<<endl;


        //cout<<maximum<<endl;
        //if(maximum>=k) cout<<"YES"<<endl;
        //else cout<<"NO"<<endl;
    }
}

