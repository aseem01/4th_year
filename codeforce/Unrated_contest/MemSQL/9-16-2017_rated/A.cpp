#include<bits/stdc++.h>
using namespace std;
int main()
{
   int n,ar[100];
   while(cin>>n)
   {
       for(int i=0;i<n;i++) cin>>ar[i];
       sort(ar,ar+n);
       int k=ar[n-1];
       if(k>25) cout<<ar[n-1]-25<<endl;
       else cout<<"0"<<endl;
   }
}

