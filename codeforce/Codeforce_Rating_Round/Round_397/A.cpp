#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    string s,ss,input,keep,pre,suf;
    while(cin>>n)
    {
        vector<pair<string,string> > v1,v2;
        cin>>input;
        //int len=input.size();
        for(int i=0; i<n; i++)
        {
            cin>>s;
            //if(i==(n-1)) keep=s;
            int flag=0;
            int test=0;
            pre="";
            suf="";
            for(int j=0; j<s.size(); j++)
            {
                if(s[j]=='-') flag=1;
                if(flag==0) pre+=s[j];
                if(s[j-1]=='>') test=1;
                if(test==1) suf+=s[j];
            }
            if(input==pre)
            {
                v1.push_back(make_pair(pre,suf));

            }
            v2.push_back(make_pair(pre,suf));

        }
        //cout<<"I'm here"<<endl;
        int t=0;


        for(int i=0; i<v1.size(); i++)
        {
            t=0;
            for(int j=0; j<n; j++)
            {
                if(v1[i].second==v2[j].first && v1[i].first==v2[j].second) t=1;
            }
            if(t==0) break;
        }
        if(t==1) cout<<"home"<<endl;
        else cout<<"contest"<<endl;
    }
}

