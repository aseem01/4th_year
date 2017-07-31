#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a,b,ar[100001];
    string s;
    while(cin>>n>>a>>b)
    {
        cin>>s;
        for(int i=0;i<n;i++)
        {
            ar[i]=s[i]-'0';
        }
        //for(int i=0;i<n;i++) cin>>ar[i];
        if(ar[a-1]==ar[b-1]) cout<<"0"<<endl;
        else
        {
            int cnt=0;
            if(a<b)
            {
                int keep=ar[a-1];
                //cout<<"keep "<<keep<<endl;
                for(int i=a;i<b;i++)
                {
                    if(keep!=ar[i]) cnt++;
                    else break;
                }
            }
            else

            {
               int keep=ar[a-1];
               //cout<<"keeeep = "<<keep<<endl;
               for(int i=a-2;i>=(b-1);i--)
               {
                   if(keep!=ar[i]) cnt++;
                   else break;
               }

            }
            cout<<cnt<<endl;
        }
    }
}
