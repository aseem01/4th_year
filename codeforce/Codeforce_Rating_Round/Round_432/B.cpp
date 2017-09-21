#include<bits/stdc++.h>
using namespace std;
int main()
{
  int ax,ay,bx,by,cx,cy;
  while(cin>>ax>>ay>>bx>>by>>cx>>cy)
  {
      int flag=0;
      if(ax==by || ax==cx || ax==cy)
      {
          if(ay==by || ay==cx|| ay==cy)
          {
              if(bx==by || bx==cx || bx==cy)
              {
                  flag=1;
              }
          }
      }
      if(flag) cout<<"Yes"<<endl;
      else cout<<"No"<<endl;
  }
}

