#include<bits/stdc++.h>
using namespace std;
int main()
{
    int r,c;
    char ch[101][101];
    int ar[101][101];
    int total;
    while(cin>>r>>c)
    {
        int maximum=0;
        int cnt=0;
        total=0;
        int minL=INT_MAX;
        int maxr=INT_MIN;
        int flag=0;
        int first,last;
        for(int i=0;i<r;i++)
        {
            for(int j=0;j<c;j++)
            {
                cin>>ch[i][j];
                if(ch[i][j]=='B')
                {
                         total++;
                         if(flag==0)
                         {
                             first=j+1;
                             flag=1;
                         }
                        maxr=max(maxr,(j+1));
                        ar[i][j]=2;
                        last=j+1;
                }
                else ar[i][j]=1;
            }
        }





         for(int i=0;i<r;i++)
        {
            for(int j=0;j<c;j++)
            {
                //cin>>ch[i][j];
                if(ch[i][j]=='B')
                {

                        minL=min(minL,min(maxr,(j+1)));

                }
            }
        }





     cout<<"maxr = "<<maxr<<" minL = "<<minL<<endl;





       for(int i=0;i<r;i++)
       {
           for(int j=0;j<c;j++)
           {
               if(ar[i][j]==2)
               {
                   for(int k=j;k<maxr;k++)
                   {
                       //cout<<" i = "<<i<<" k = "<<k<<endl;
                       //cout<<"r = "<<ar[i][k]<<endl;
                       ar[i][k]=2;
                   }
                   //cout<<"I'm here j = "<<j<<endl;
                   for(int k=j;k>=minL;k--)
                   {
                       //cout<<"i = "<<i<<" kkk = "<<k<<endl;
                       //cout<<"l = "<<ar[i][k]<<endl;
                       ar[i][k-1]=2;
                       //p++;
                   }
               }
           }
       }


       /*for(int i=0;i<r;i++)
       {
           for(int j=0;j<c;j++)
           {
               cout<<ar[i][j]<<" ";
           }
           cout<<endl;
       }
       cout<<endl;*/



       for(int i=0;i<r;i++)
       {
           for(int j=0;j<c;j++)
           {
               if(ar[i][j]==2) cnt++;
           }
       }

       if(total==cnt) cout<<"-1"<<endl;
       else cout<<cnt-total<<endl;


    }
}

