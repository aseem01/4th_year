#include<iostream>
using namespace std;
int main()
{
    int t;
    int arr[1001];
    cin>>t;
    while(t--)
    {
        int i,j,x,sum,n,count=0;
        cin>>n;
        for(i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        cin>>x;

        for(i=0;i<n;i++)
        {
            //sum=arr[i];
            for(j=i+1;j<n;j++)
            {
                sum=arr[i]^arr[j];
                if(sum==x)
                {
                    count++;
                }
            }
        }

        cout<<count<<endl;
    }
    return 0;
}
