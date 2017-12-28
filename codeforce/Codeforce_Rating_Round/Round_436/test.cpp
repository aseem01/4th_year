#include<bits/stdc++.h>
using namespace std;
int ar[200010];
int main()
{
    int n,p,cnt;
    while(cin>>n)
    {
        map<int,int>mp;
        set<int>s;
        vector<int>v,vv;
        for(int i=0;i<n;i++)
        {
            cin>>ar[i];
            s.insert(ar[i]);
            mp[ar[i]]++;
        }
        if(s.size()==n)
        {
            cout<<"0"<<endl;
            for(int i=0;i<n-1;i++) cout<<ar[i]<<" ";
            cout<<ar[n-1]<<endl;
            continue;
        }

         for(int i=1;i<=n;i++)
         {
             if(mp[i]==0) v.push_back(i);
         }

         //for(int i=0;i<v.size();i++) cout<<v[i]<<" ";
         //cout<<endl;
         v.push_back(200001);
        // v[v.size()]=200001;
         p=0;
         for(int i=0;i<n;i++)
         {
             if(mp[ar[i]]==1)
             {
                 vv.push_back(ar[i]);
                 mp[ar[i]]=-1;
             }
             else if(mp[ar[i]]>1)
             {
                 if(ar[i]<=v[p])
                 {
                     vv.push_back(ar[i]);
                     mp[ar[i]]=0;
                 }
                 else
                 {
                 vv.push_back(v[p]);
                 mp[ar[i]]-=1;
                 p++;
                 }
             }
             else if(mp[ar[i]]==0)
             {
                vv.push_back(v[p]);
                p++;
             }
            // cout<<"i = "<<i<<endl;
         }
           cout<<v.size()-1<<endl;
           for(int i=0;i<vv.size()-1;i++) cout<<vv[i]<<" ";
           cout<<vv[vv.size()-1]<<endl;
    }

}










