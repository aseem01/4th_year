#include<bits/stdc++.h>
using namespace std;
int main()
{
  string s;
  while(cin>>s)
  {
      int t1=0;
      set<char>set1;
      int len=s.size();
      for(int i=0;i<len;i++)
      {
          //if(s[i]!=s[len-i-1]) t1=1;
          set1.insert(s[i]);
      }
      if(set1.size()!=len) cout<<"YES"<<endl;
      else cout<<"NO"<<endl;
  }
}

