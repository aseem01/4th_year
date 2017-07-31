#include<bits/stdc++.h>
using namespace std;
#define MX 1000010

bool status[1100002];
int isprime[MX];
vector<int>prime;
void siv()
{
    memset(isprime,1,sizeof(isprime));
    for(int i=2; i<MX; i++)
    {
        if(isprime[i])
        {
            for(int j=2; j*i<MX; j++)
            {
                isprime[i*j]=0;
            }
        }
    }

}



int main()
{
  int n;
  siv();
  while(cin>>n)
  {
      for(int i=1;i<=1000;i++)
      {
          if(!isprime[n*i+1])
          {
              cout<<i<<endl;
              break;
          }
      }
  }
}

