#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define mp make_pair
#define mod 1000000007
#define MAX 10000
typedef long long int ll;
int a[1000004];
int main()
{
   int t;
   cin>>t;
   while(t--)
   {
       int n,x,ma=0;
       cin>>n;
       memset(a,0,sizeof(a));
       for(int i=0;i<n;i++)
       {
           cin>>x;
           a[x]+=1;
           ma=max(ma,x);
       }
       cout<<"maximum = "<<ma<<endl;
       for(int i=ma;i>=1;i--)
       {
            int k=i,count=0;
            cout<<"iiii = "<<i<<endl;
            bool flag=false;
            while(k<=ma)
            {
                count+=a[k];
                if(count>=2)
                {
                    cout<<"i = "<<i<<" k = "<<k<<endl;
                    cout<<i<<endl;

                    flag=true;
                    break;
                }
                k+=i;
            }
            if(flag)
            {
                break;
            }
        }
    }
}
