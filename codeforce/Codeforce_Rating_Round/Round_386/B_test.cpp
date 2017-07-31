#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    string s;
    while(cin>>n)
    {
        cin>>s;
        string ss="";
        if(n%2)
        {
            for(int i=0;i<n;i++)
            {
                if((i+1)%2==1) ss+=s[i];
                else ss=s[i]+ss;
               // cout<<"ss = "<<ss<<endl;
            }
        }
        else
        {
            ss=s[0];
            for(int i=1;i<n;i++)
            {
                if(i%2) ss+=s[i];
                else ss=s[i]+ss;
            }
        }
        cout<<ss<<endl;
    }
}

