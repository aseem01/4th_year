#include<bits/stdc++.h>
using namespace std;
map<char,int>mp1,mp2,mp;
char ar[2001][2001];
vector<pair<char,char> > v;
int main()
{
  string s1,s2;
  while(cin>>s1>>s2)
  {
      for(int i=0;i<s1.size();i++)
      {
          mp1[s1[i]]++;
          //mp[s1[i]]=s2[i];
      }
      for(int i=0;i<s2.size();i++)
      {
          mp2[s2[i]]++;
      }

      int flag=0;
      if(s1==s2)
      {
          cout<<"0"<<endl;
          continue;
      }
      for(char ch='a';ch<='z';ch++)
      {
          if(mp1[ch]!=mp2[ch]) flag=1;
      }
      memset(ar,'P',sizeof(ar));
      if(!flag) cout<<"-1"<<endl;
      else
      {
          for(int i=0;i<s1.size();i++)
          {
              if(s1[i]!=s2[i] && mp[s1[i]]==0)
              {
                 v.push_back(make_pair(s1[i],s2[i]));
                 //ar[s1[i]][s2[i]]='A';
                 //ar[s2[i]][s1[i]]='A';
                 mp[s1[i]]=1;
              }
          }
          cout<<v.size()<<endl;
      for(int i=0;i<v.size();i++)
      {
          cout<<v[i].first<<" "<<v[i].second<<endl;
      }
      }

      mp1.clear();
      mp2.clear();
      v.clear();
  }
}
