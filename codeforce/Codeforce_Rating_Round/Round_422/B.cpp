#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,ar[100010];
    string s,ss;
    while(cin>>n>>m)
    {
        cin>>s>>ss;
        string sss="";
        vector<string>v;
        vector<int>vv;
        for(int i=0;i<ss.size()-s.size()+1;i++)
        {
            for(int j=0;j<s.size();j++)
            {
                sss+=ss[j+i];
            }
            v.push_back(sss);
            sss="";
        }
        /*for(int i=0;i<v.size();i++)
        {
            cout<<v[i]<<endl;
        }*/
        int minimum=INT_MAX;
        int cnt=0;
        for(int i=0;i<v.size();i++)
        {
            cnt=0;
            for(int j=0;j<s.size();j++)
            {
                string ch=v[i];
                if(s[j]!=ch[j])
                {
                    vv.push_back(j+1);
                    cnt++;
                }
            }
            if(minimum>cnt)
            {
               minimum=cnt;
               for(int k=0;k<vv.size();k++)
               {
                   ar[k]=vv[k];
               }
            }
            vv.clear();
        }
        cout<<minimum<<endl;
        for(int i=0;i<minimum;i++) cout<<ar[i]<<" ";
        cout<<endl;
    }
}

