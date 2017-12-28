#include<bits/stdc++.h>
using namespace std;

string str[70009];
string sbstr[70009*50];
set<string> ans;
set<string>::iterator it;
map<string,int> mp;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    string s;
    cin>>n;

    for(int i=0; i<n; i++)
    {
        cin>>str[i];
    }

    for(int i=0; i<n; i++)
    {
        ans.clear();
        for(int j=0; j<str[i].size(); j++)
        {
            for(int k=0; k<str[i].size()-j; k++)
            {

                s = str[i].substr(k,j+1);
                cout<<"s = "<<s<<endl;
                ans.insert(s);
            }
        }
        for(it=ans.begin(); it!=ans.end(); ++it)
        {
            s = *it;
            mp[s]++;
        }
        ans.clear();
    }



    for(int i=0; i<n; i++)
    {
        for(int j=0; j<str[i].size(); j++)
        {
            bool ok = false;
            for(int k=0; k<str[i].size()-j; k++)
            {

                s = str[i].substr(k,j+1);
                if(mp[s]==1)
                {
                    ok = true;
                    break;
                }

            }
            if(ok)
                break;
        }
        cout<<s<<endl;
    }
    return 0;
}
