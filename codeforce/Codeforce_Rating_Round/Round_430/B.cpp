#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n,m,q,x,y,radius;
  while(cin>>n>>m)
  {
      cin>>q;
      int cnt=0;
      while(q--)
      {
          cin>>x>>y>>radius;
          int aa=abs(x);
          int bb=abs(y);
          int maximum=max(aa,bb);
          int temp1=abs(maximum-radius);
          //int temp2=abs(bb-radius);
          if((aa>=m && aa<=n) && bb<=n && (temp1>=m && temp1<=n)) cnt++;
          else if((bb>=m &&bb<=n) && aa<=n && (temp1>=m && temp1<=n)) cnt++;

      }
      cout<<cnt<<endl;
  }
}

