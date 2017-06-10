#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n;
    scanf("%d",&t);
    while(t--)
    {
       scanf("%d",&n);
       int a[n],i;
       for(i=0;i<n;i++) scanf("%d",&a[i]);
       sort(a,a+n);
       int cnt=0,l=1,r=0;
       i=0;
       while(i<n-1)
       {
           if(a[i]<l||a[n-1]==l)
           {
               cnt+=a[i];
               i++;
               continue;
           }
           if(i+1<n-1)
           {
               cnt+=a[i]-l;
               cnt+=a[i+1]-l;
               l++;
               i++;
           }
           else
           {
               cnt+=a[i];
           }

           i++;

       }
       cnt+=a[n-1]-l;
       printf("%d\n",cnt);
    }
}
