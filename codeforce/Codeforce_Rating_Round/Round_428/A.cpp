#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,ar[100010];
    while(cin>>n>>m)
    {
        for(int i=0;i<n;i++) cin>>ar[i];
        //sort(ar,ar+n);
        int sum=0;
        int flag=0;
        int cnt=0;
        for(int i=0;i<n;i++)
        {
            if(ar[i]>=8)
            {
                sum+=8;
                ar[i+1]=ar[i+1]+(ar[i]-8);
            }
            else sum+=ar[i];
            cnt++;
            if(sum>=m)
            {
                flag=1;
                break;
            }
        }
        if(flag==0) cout<<"-1"<<endl;
        else cout<<cnt<<endl;
    }
}

