#include<bits/stdc++.h>
using namespace std;
int main()
{

    string s;
    int n;

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
        int aa=mp['A'];
        int cc=mp['C'];
        int gg=mp['G'];
        int tt=mp['T'];

        int sum=mp['A']+mp['C']+mp['G']+mp['T'];
        int baki=n-sum;
        //cout<<"sum = "<<sum<<endl;
        //cout<<"baki = "<<baki<<endl;

        int maximum=max(max(mp['A'],mp['C']),max(mp['G'],mp['T']));
        int pabe=n/4;
        int ta=mp['A']-ta;
        int tc=mp['C']-tc;
        int tg=mp['G']-tg;
        int tt=mp['T']-tt;
        //cout<<"MAximum = "<<maximum<<endl;
      // if(maximum==mp['A'] && maximum==mp['C'] && maximum==mp['G'] && maximum==mp['T'])
        //{
           //cout<<"here"<<endl;
           // if(n%4==0)
            //{
               // int ta=baki/4;
               // int tc=baki/4;
                //int tg=baki/4;
                //int tt=baki/4;
                string sss="";
               for(int i=0;i<n;i++)
               {
                   if(s[i]=='?')
                   {
                       if(ta)
                       {
                           sss+='A';
                           ta--;
                       }
                       if(tc)
                       {
                           sss+='C';
                           tc--;
                       }
                       if(tg)
                       {
                           sss+='G';
                           tg--;
                       }
                       if(tt)
                       {
                           sss+='T';
                           tt--;
                       }

                   }
                   else
                   {
                       sss+=s[i];
                      /* if(s[i]=='A') ta--;
                       if(s[i]=='C') tc--;
                       if(s[i]=='G') tg--;
                       if(s[i]=='T') tt--;*/
                   }
               }
               cout<<sss<<endl;
            }
            else cout<<"==="<<endl;
            /*continue;
        }
        for(int i=1;i<=baki;i++)
        {
            /*if(s['A']<s['C'] && s['A']<s['G'] && s['A']<s['T']) mp['A']++;
            if(s['C']<s['A'] && s['C']<s['G'] && s['C']<s['T']) mp['C']++;
            if(s['G']<s['A'] && s['G']<s['C'] && s['G']<s['T']) mp['G']++;
            if(s['T']<s['A'] && s['T']<s['C'] && s['T']<s['G']) mp['T']++;
            if(mp['A']<maximum)
            {
               mp['A']++;
            }

           else if(mp['C']<maximum)
            {
               mp['C']++;
            }
            else if(mp['G']<maximum)
            {
               mp['G']++;
            }
            else if(mp['T']<maximum)
            {
               mp['T']++;
            }
        }
        //cout<<"a = "<<mp['A']<<" c = "<<mp['C']<<" g = "<<mp['G']<<" t = "<<mp['T']<<endl;
        int aaa=mp['A']-aa;
        int ccc=mp['C']-cc;
        int ggg=mp['G']-gg;
        int ttt=mp['T']-tt;
       // cout<<"aaa = "<<aaa<<" ccc = "<<ccc<<"ggg = "<<ggg<<" ttt = "<<ttt<<endl;
        string ss="";

        if(mp['A']==mp['C'] && mp['C']==mp['G'] && mp['G']==mp['T'])
        {
            //int flag=1;
          for(int i=0;i<n;i++)
          {
              if(s[i]=='?')
              {
                  if(aaa)
                  {
                      ss+='A';
                      aaa--;
                  }
                  else if(ccc)
                  {
                      ss+='C';
                      ccc--;
                  }
                  else if(ggg)
                  {
                     ss+='G';
                     ggg--;
                  }
                  else if(ttt)
                  {
                      ss+='T';
                      ttt--;
                  }
              }
              else
              {
                  ss+=s[i];
                  /*if(s[i]=='A') aaa--;
                  if(s[i]=='C') ccc--;
                  if(s[i]=='G') ggg--;
                  if(s[i]=='T') ttt--;
              }
          }
          //cout<<ss<<endl;
        }
        for(int i=0;i<n;i++)
        {
            if(ss[i]=='A') mp1[ss[i]]++;
            if(ss[i]=='C') mp1[ss[i]]++;
            if(ss[i]=='G') mp1[ss[i]]++;
            if(ss[i]=='T') mp1[ss[i]]++;
        }

        if(mp1['A']==mp1['C'] && mp1['C']==mp1['G'] && mp1['G']==mp1['T'] && (n==(mp1['A']+mp1['C']+mp1['G']+mp1['T'])))
        {
            cout<<ss<<endl;
        }
        else cout<<"==="<<endl;*/
        mp.clear();

    }
}

