#include<bits/stdc++.h>
using namespace std;
typedef long long int LL;
int n,digit,sum,ans,cnt[10];
int main()
{

    string s;
    while(cin>>n>>s)
    {
        sum=0;
       for(int i=0;i<s.size();i++)
       {
           digit=s[i]-'0';
           //cout<<"digit = "<<digit<<endl;
           cnt[digit]++;
           sum+=digit;
       }
       ans=0;
      // cout<<"I'm here"<<endl;
       //cout<<"cnt = "<<cnt[1]<<endl;
       for(int i=0;i<=9;i++)
       {
           for(int j=1;j<=cnt[i];j++)
           {
               if(sum<n)
               {
                   sum+=9-i;
                   ans++;
               }
           }
       }
       cout<<ans<<endl;

    }
}

