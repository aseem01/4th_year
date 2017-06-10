#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    string s[1000];
    int ar[101][101];
    while(cin>>n>>m)
    {
        //int ar[n][m];
        int ans=0;
        for(int i=0; i<n; i++) cin>>s[i];
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<m+2; j++)
            {
                ar[i][j]=s[i][j]-'0';
                //cout<<"("<<i<<","<<j<<")"<<ar[i][j]<<" ";
            }
            //cout<<endl;
        }
         //cout<<endl;
         //cout<<ar[1][4]<<endl;
        int flag=0;
        int i,j,k;
        for(i=n-1; i>=0; i--)
        {
            int cnt=0;
            int cnt1=0;
            if(flag==0)
            {
                for(j=0; j<m+2; j++)
                {
                    if(ar[i][j]==1)
                    {
                        cnt++;
                    }
                    cnt1++;
                }
                if(i==0)
                {
                    cnt=0;
                    cnt1=0;
                    for(int t=m+1;t>=0;t--)
                    {
                        if(ar[i][t]==1) cnt++;
                        if(cnt) cnt1++;
                    }
                    if(cnt1==0)
                    {
                        for(int t=m+1;t>=0;t--)
                        {
                            if(ar[i][t]==0) cnt++;
                            else break;
                        }
                        ans-=cnt;
                    }
                    else
                    ans+=cnt1;
                    continue;
                }
                if(cnt==1 && ar[i][1]==1)
                {
                    ans+=3;
                    flag=0;
                }
                else
                {
                    ans+=cnt1;
                    flag=1;
                }
            }
            else
            {
               /* cout<<"i'm here"<<endl;
                cout<<"cnt = "<<cnt<<endl;
                cout<<"cnt1 = "<<cnt1<<endl;*/
                for(k=m+1; k>=0; k--)
                {
                    //cout<<"i = "<<i<<" k = "<<k<<endl;
                    if(ar[i][k]==1) cnt++;
                    cnt1++;
                }
                //cout<<"cnt = "<<cnt<<endl;

                if(i==0)
                {
                    cnt=0;
                    cnt1=0;
                    for(int t=0;t<=m+1;t++)
                    {
                        if(ar[i][t]==1) cnt++;
                        if(cnt) cnt1++;
                    }
                    //cout<<"chhh = "<<cnt1<<endl;
                    if(cnt1==0)
                    {
                        for(int t=0;t<=m+1;t++)
                        {
                            if(ar[i][t]==0) cnt++;
                            else break;

                        }
                        ans-=cnt;
                    }
                    else
                    ans+=cnt1;
                    continue;
                }

                if(cnt==1 && ar[i][m]==1)
                {
                    ans+=3;
                    flag=1;
                }
                else
                {
                    ans+=cnt1;
                    flag=0;
                }
            }


            //cout<<"ans = "<<ans<<" cnt = "<<cnt<< " flag = "<<flag<<endl;
        }
        cout<<ans-1<<endl;
        //cout<<ar[1][4]<<endl;
    }
/*
3 4
001000
000010
000010
*/
}




