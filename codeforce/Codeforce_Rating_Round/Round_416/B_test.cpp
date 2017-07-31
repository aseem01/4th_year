#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,ar,l,r,pos;
    while(cin>>n>>m)
    {
        vector<pair<int,int> >v,vv;
        pair<int,int>ar[10010],br[10010];
        for(int i=0;i<n;i++)
        {
            cin>>ar[i].first;
            ar[i].second=i;
            br[i].first=ar[i].first;
            br[i].second=i;
            //v.push_back(make_pair(ar,i));
            //vv.push_back(make_pair(ar,i));
        }
        /*for(int i=0;i<n;i++)
        {
            cout<<"v[i].first = "<<ar[i].first<<" v[i].second = "<<ar[i].second<<endl;
        }*/
        for(int i=0;i<m;i++)
        {
            cin>>l>>r>>pos;
            sort(ar+l-1,ar+r);
            //for(int i=0;i<n;i++)
            //cout<<"v[i].first = "<<ar[i].first<<" v[i].second = "<<ar[i].second<<endl;
            if(ar[pos-1].second==br[pos-1].second) cout<<"Yes"<<endl;
            else cout<<"No"<<endl;
            for(int j=l-1;j<r;j++)
            {
                ar[j].first=br[j].first;
                ar[j].second=br[j].second;
            }

        }
    }
}
