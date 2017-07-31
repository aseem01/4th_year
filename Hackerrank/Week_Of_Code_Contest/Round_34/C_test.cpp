#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,ar[100010];
    cin>>n;
    for(int i=0;i<n;i++) cin>>ar[i];
    vector<int>v,vv(n);
    for (int i=0; i <n; i++)
    {
        // Pick ending point
        for (int j=i; j<n; j++)
        {
            for (int k=i; k<=j; k++) v.push_back(ar[k]);
            vv.push_back(v);
                //result += arr[k] ;
        }
    }
    for(int i=0;i<vv.size();i++)
    {
        for(int j=0;j<vv[i].size();i++) cout<<vv[vv[j]]" ";
        cout<<endl;
    }

}
