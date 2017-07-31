#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    string s,ss;
    cin>>n;
    while(n--)
    {
        cin>>s;
        int cnt=0;
        ss="";
        int p;
        for(int i=0;i<s.size();)
        {
            p=i;
            while(s[p]==s[i])
            {
                i++;
            }
            ss+=s[i-1];
        }
       // cout<<ss<<endl;
        for(int i=0;i<ss.size();i++)
        {
            if(ss[i]=='1' && ss[i+1]=='0' && ss[i+2]=='1') cnt++;
        }
        //cout<<ss<<endl;
        cout<<cnt<<endl;
    }

}


