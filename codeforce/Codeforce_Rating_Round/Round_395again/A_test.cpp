#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,k;
    while(cin>>n>>m>>k)
    {
        vector<int>v1,v2;
        for(int i=1;; i++)
        {
            if((n*i)>k) break;
            v1.push_back(n*i);
            //cout<<n*i<<endl;
        }
        for(int i=1;; i++)
        {
            if((m*i)>k) break;
            v2.push_back(m*i);
        }
        int cnt=0,a,b;
        if(v1.size()>v2.size())
        {
            for(int i=0; i<v1.size(); i++)
            {
                for(int j=0; j<v2.size(); j++)
                {
                    //cout<<"v1[i] = "<<v1[i]<<" v2[j] = "<<v2[j]<<endl;
                    if(v1[i]==v2[j]) cnt++;
                }
            }
        }
        else
        {
            for(int i=0; i<v2.size(); i++)
            {
                for(int j=0; j<v1.size(); j++)
                {
                    //cout<<"v1[i] = "<<v1[i]<<" v2[j] = "<<v2[j]<<endl;
                    if(v2[i]==v1[j]) cnt++;
                }
            }
        }

        cout<<cnt<<endl;

    }
}
