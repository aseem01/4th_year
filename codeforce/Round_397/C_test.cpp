

#include<bits/stdc++.h>
using namespace std;
int main()
{
   int a,b,c;
   while(cin>>a>>b>>c)
   {
       int res=b/a+c/a;
       if(res==0) cout<<"-1"<<endl;
       else cout<<res<<endl;
   }
}
