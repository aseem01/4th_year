#include<bits/stdc++.h>
using namespace std;
int main()
{
  int c,v0,v1,a,l;
  while(cin>>c>>v0>>v1>>a>>l)
  {
      int total=c;
      int sum=v0;
      int cnt=1;
      int ache;
      while(sum<total)
      {
          //if(i==1)
          ache=sum-l;
          if(a+sum+ache>v1)
          {
              sum=ache+v1;
          }
          else
          {
              if(a==0) sum=ache+v0;
              else
          sum=ache+sum+a;
          }
          //i++;
          cnt++;
          //cout<<"sum = "<<sum<<endl;
      }
      cout<<cnt<<endl;
  }
}

