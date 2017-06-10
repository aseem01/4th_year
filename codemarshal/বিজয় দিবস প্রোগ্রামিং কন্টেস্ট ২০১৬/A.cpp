#include<bits/stdc++.h>
using namespace std;
const int N=1e6+100;
int mark[N];
int prime[N];
void sieve()
{
    int k=0;
    for(int i=2;i*i<N;i++)
    {
        if(!mark[i])
        {
            for(int j=i*i;j<N;j+=i) mark[j]=1;
            prime[k++]=i;
        }
    }
}
int main()
{
    sieve();
    int n;
    while(cin>>n)
    {
        for(int i=0;i<=sqrt(n);i++)
        {
            cout<<prime[i]<<" ";
        }
        cout<<endl;
    }
}
