#include<bits/stdc++.h>
using namespace std;
#define uniq(x)  x.erase(unique(x.begin(),x.end()), x.end())
int main()
{
    int n;
    string s;
    while(cin>>n>>s)
    {
        uniq(s);
        //cout<<s<<endl;
        int cnt=0;
        int cnt1=0;
        for(int i=0;i<s.size()-1;i++)
        {
            if(s[i]=='S' && s[i+1]=='F') cnt++;
            else cnt1++;
        }
        //if(cnt==1 && cnt1==0) cout<<"YES"<<endl;
       if(cnt>cnt1) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}

