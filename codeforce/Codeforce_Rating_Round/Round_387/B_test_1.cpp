#include<bits/stdc++.h>
using namespace std;
int main()
{

    string s;
    int n,pabe;

    while(cin>>n)
    {
        cin>>s;
        //int len=s.size();
        map<char,int>mp,mp1;
        if(n%4!=0)
        {
            cout<<"==="<<endl;
            continue;
        }
        for(int i=0; i<n; i++)
        {
            if(s[i]=='A') mp[s[i]]++;
            if(s[i]=='C') mp[s[i]]++;
            if(s[i]=='G') mp[s[i]]++;
            if(s[i]=='T') mp[s[i]]++;

        }
        int pabe=n/4;
        int ta=pabe-mp['A'];
        int tc=pabe-mp['C'];
        int tg=pabe-mp['G'];
        int tt=pabe-mp['T'];
        string sss="";
        //cout<<"s = "<<s<<endl;
        for(int i=0; i<n; i++)
        {
            if(s[i]=='?')
            {
                if(ta)
                {
                    sss+='A';
                    ta--;
                }
                else if(tc)
                {
                    sss+='C';
                    tc--;
                }
                else if(tg)
                {
                    sss+='G';
                    tg--;
                }
                else if(tt)
                {
                    sss+='T';
                    tt--;
                }
                //cout<<"sss = "<<sss<<endl;

            }
            else
            {
                sss+=s[i];
            }
        }
        for(int i=0;i<sss.size();i++)
        {
            if(sss[i]=='A') mp1['A']++;
             if(sss[i]=='C') mp1['C']++;
             if(sss[i]=='G') mp1['G']++;
              if(sss[i]=='T') mp1['T']++;
        }
        if(mp1['A']==mp1['C'] && mp1['C']==mp1['G'] && mp1['G']==mp1['T'])
        {
            cout<<sss<<endl;
        }
        else cout<<"==="<<endl;

    }
}



