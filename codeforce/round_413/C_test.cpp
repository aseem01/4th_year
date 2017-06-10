#include<bits/stdc++.h>
using namespace std;
long long int x[2000010],y[2000010];
int main()
{
 int n,c,d;
 while(cin>>n>>c>>d)
 {
     int bakicoin,bakidimon;
     int pos=-1;
     char z,check;
     int value;
     int sum=-1;
     int flag=0;
     for(int i=0;i<n;i++)
     {
         cin>>x[i]>>y[i]>>z;
         if(y[i]<=c || y[i]<=d)
         {
             if(sum<x[i])
             {
             if(z=='C')
             {
                 if(c>=y[i])
                 {
                 bakicoin=c-y[i];
                 flag=1;
                 }
             }
             if(z=='D')
             {
                 if(d>=y[i])
                 {
                 bakidimon=d-y[i];
                 flag=1;
                 }
             }
             if(flag)
             {
             sum=x[i];
             pos=i;
             check=z;
             }
             }
         }
     }
     //cout<<"sum = "<<sum<<endl;
     x[pos]=-1;
     if(check=='C') bakicoin=bakicoin;
     else bakicoin=c;
     if(check=='D') bakidimon=bakidimon;
     else bakidimon=d;
     //cout<<"bakicoin = "<<bakicoin<<endl;
     //cout<<"bakidimon = "<<bakidimon<<endl;
     int sum1=-1;
     int flag1=0;
     for(int i=0;i<n;i++)
     {
         //cout<<"x[i] = "<<x[i]<<" y[i] = "<<y[i]<<endl;
         if(((y[i]<=bakicoin) && x[i]!=-1) ||((y[i]<=bakidimon) && x[i]!=-1))
         {
             if(sum1<x[i])
             {
                 sum1=x[i];
             if(z=='C')
             {
                 if(bakicoin>=y[i])
                 {
                bakicoin=bakicoin-y[i];
                flag1=1;
                 }
             }
             if(z=='D')
             {
                 if(bakicoin>=y[i])
                 {
                 bakidimon=bakidimon-y[i];
                 flag1=1;
                 }
             }
             if(flag1) sum1=x[i];
             }
         }
     }
     //cout<<"sum1 = "<<sum1<<endl;
     if(sum!=-1 && sum1!=-1) cout<<sum+sum1<<endl;
     else cout<<"0"<<endl;

 }
}

