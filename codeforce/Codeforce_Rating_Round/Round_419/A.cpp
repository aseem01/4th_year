#include<bits/stdc++.h>
using namespace std;
int Ispalindrome(int hour,int minutes)
{
    if(hour/10==minutes%10 && hour%10==minutes/10) return 1;
    else return 0;
}
int main()
{
    int hour,minutes,h,m;
    char c;
    while(cin>>hour>>c>>minutes)
    {

         for(int i=0;i<=24*60;i++)
         {
             int total=(hour*60)+minutes+i;
             h=(total/60)%24;
             m=total%60;
             //cout<<hour<<" "<<minutes<<endl;
             if(Ispalindrome(h,m))
             {
                 cout<<i<<endl;
                 break;
             }
         }
    }

}

