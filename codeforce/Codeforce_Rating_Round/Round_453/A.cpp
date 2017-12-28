#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,x,y,ar[100010];
    while(cin>>n>>m)
    {
        map<int,int>mp;
        vector<pair<int,int> >v;
        for(int i=1;i<=n;i++)
        {
            cin>>x>>y;
            v.push_back(make_pair(x,y));
        }

        int flag=0;



       // sort(v.begin(),v.end());


       /* for(int i=0;i<v.size();i++)
        {
            cout<<"first = "<<v[i].first<<" second = "<<v[i].second<<endl;
        }*/
        //int ok=0;
        int boro=v[0].second;
       // if(v[0].first!=0) ok=1;
       if(n==1)
       {
           if(v[0].second<m)
           cout<<"NO"<<endl;
           else cout<<"YES"<<endl;

       }
       else
       {

        for(int i=1;i<v.size();i++)
        {
            if(boro>=m) break;

            if(v[i].first>boro) flag=1;
            if(v[i].second>boro)
            {
                boro=v[i].second;
            }


        }
        //if(v[v.size()-1].second<m) cout<<"NO"<<endl;

        //if(ok==1) cout<<"NO"<<endl;
        if(flag==0) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
       }
    }
}

