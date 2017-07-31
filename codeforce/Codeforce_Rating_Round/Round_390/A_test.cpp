#include<bits/stdc++.h>
using namespace std;
int main()
{
    map<int,int>mp;
    int n,keep,sum;
    while(cin>>n)
    {
        vector<pair<int,int> > v;
        sum=0;
        int flag=0;
        for(int i=0; i<n; i++)
        {
            cin>>keep;
            mp[i]=keep;
            sum+=mp[i];
        }
        if(sum!=0)
        {
            cout<<"YES"<<endl;
            cout<<"1"<<endl;
            cout<<"1 "<<n<<endl;
            flag=1;
        }
        else
        {
            sum=0;
            int i;
            for(i=0; i<n; i++)
            {
                sum+=mp[i];
                if(sum!=0)
                {
                    v.push_back(make_pair(1,i+1));
                    break;
                }
            }
            i=i;
            int tt=i+2;
            //cout<<"tt = "<<tt<<endl;
            for(; i<n; i++)
            {
                sum+=mp[i];
            }
            if(sum!=0)
            {
                v.push_back(make_pair(tt,n));
                //break;
            }

            //
            if(v.size()==2)
            {
                cout<<"YES"<<endl;
                cout<<"2"<<endl;
                for(int i=0; i<2; i++)
                {
                    cout<<v[i].first<<" "<<v[i].second<<endl;
                    flag=1;
                }
            }


        }
        if(!flag) cout<<"NO"<<endl;
        mp.clear();
        v.clear();
    }

}

