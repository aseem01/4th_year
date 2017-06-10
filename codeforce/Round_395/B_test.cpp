#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,l;
    cin>>n>>l;
    int i,j,m;
    int k[100],s[100],kk[100];
    for(i=0; i<n; i++)
    {
        cin>>k[i];
    }
    kk[0]=l-k[n-1]+k[0];
    for(i=1; i<n; i++)
    {
        kk[i]=k[i]-k[i-1];
    }

    for(i=0; i<n; i++)
    {
        cin>>s[i];
    }
    int ss[1000];
    ss[0]=l-s[n-1]+s[0];
    for(i=1; i<n; i++)
    {
        ss[i]=s[i]-s[i-1];
    }

    j=0;
    for(i=n; i<2*n; i++)
    {
        ss[i]=ss[j];
        j++;
    }

    int flg;
    for(i=0; i<n; i++)
    {
        flg=0;
        for(j=0; j<n; j++)
        {
            if(ss[i+j]!=kk[j])
            {
                flg=1;
                break;
            }
        }
        if(flg==0)
        {
            cout<<"YES"<<endl;
            return 0;
        }
    }
    cout<<"NO"<<endl;
}
