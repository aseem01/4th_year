#include<bits/stdc++.h>
using namespace std;
int main()
{
  long long int a,b,ans,minimum;
  while(cin>>a>>b)
  {
      minimum=min(a,b);
      ans=1;
      for(long long int i=1;i<=minimum;i++)
      {
          ans=ans*i;
      }
      cout<<ans<<endl;
  }
}

