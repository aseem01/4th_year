#include<bits/stdc++.h>
using namespace std;
#define SIZE 103

long int status[SIZE],ar[100010]= {0};

void sieve()
{
    long int i,j;
    long int sq = sqrt(SIZE);
    for(i=3; i<=sq; i+=2)
    {
        if(status[i]==0)
        {
            for(j=2*i; j<=SIZE; j+=i)
                status[j]=1;
        }
    }


    /*for(int i=4;i<=SIZE;i+=2) status[i]=1;
	for(int i=3;i<=sq;i+=2){
		if(status[i]==0)
		{
			for(int j=i*i;j<=SIZE;j+=i) status[j]=1;
		}
	}*/
	status[1]=1;


    //status[1] = 1;
    ar[1]=2;
    int k=1;
    //cout<<"yy = "<<status[4]<<endl;
    for(i=1; i<=SIZE; i++)
    {
        if(status[i]==0)
        {
            ar[k++]=i;
           // cout<<"check = "<<i<<" k = "<<k<<endl;
        }
    }
}

main()
{
    sieve();
    long n,k2;
    while(cin>>n>>k2)
    {
        long n1=n,k1=0,i1,ar1[100010]={0},f=0;
        if(n%2==0)
            while(n%2==0)
            {
                ar1[k1++]=2;
                n/=2;
            }
        for(i1=1;ar[i1]<=n1; i1++)
        {
            if(n%ar[i1]==0)
            {
                while(n%ar[i1]==0)
                {
                    ar1[k1++]=ar[i1];
                    n/=ar[i1];
                }
            }
        }
        long sum=1;
        if(k1>=k2)
        {
            for(i1=0;i1<k2-1;i1++)
                cout<<ar1[i1]<<" ";
            for(i1=k2-1;i1<k1;i1++)
            {
                sum*=ar1[i1];
            }
            if(sum!=1)
                cout<<sum<<endl;
        }
        else
            cout<<-1<<endl;
    }
}
