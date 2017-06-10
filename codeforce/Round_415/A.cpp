#include<bits/stdc++.h>
using namespace std;
int main()
{
   int  n,k,ar[101];
   while(cin>>n>>k)
   {
       double  sum=0;
       for(int i=0;i<n;i++)
       {
           cin>>ar[i];
           sum+=ar[i];
       }
       int t=n;
       int ans;
       double res;
       while(true)
       {
           res=sum/double(t);
           double check=double(t)/2.0;
           double ache;
           //cout<<"res = "<<res<<endl;
           //cout<<"check = "<<check<<endl;
           if(res==k)
           {
               ans=t;
               break;
           }
           else if(res!=int(res))
           {
               ache=(res-int(res))*t;
               if(ache>=check && int(res)+1==k)
               {
                   ans=t;
                   break;
               }
               else
               {
                   sum+=k;
                   t++;
               }
           }

           else
           {
               sum+=k;
               t++;
           }
           //cout<<"sum = "<<sum<<endl;
          // cout<<"t = "<<t<<endl;
          // if(t==10) break;
       }
       cout<<ans-n<<endl;
   }
}

