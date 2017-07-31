
#include<bits/stdc++.h>
using namespace std;
#define uniq(x)  x.erase(unique(x.begin(),x.end()), x.end()) //Unique value find from vector
#define upper(arr,n,fixed) upper_bound(arr,arr+n,fixed)-arr  //Upper value search;
#define lower(arr,n,fixed) upper_bound(arr,arr+n,fixed)-arr  //Lower value search;
#define max3(a,b,c) max(max(a,b),c)//maximum value find three value;
#define min3(a,b,c) min(min(a,b),c)//minimum value find three value;
#define rep(i,intial,n) for(int i=intial; i<(n) ; i++)
#define REP(i,intial,n) for(int i=intial; i<=(n) ; i++)
//||--------------------------->||Main_Code_Start_From_Here||<---------------------------------||
int main()
{
    //freopen("a.in", "r", stdin);
    //freopen("a.out", "w", stdout);
    int test,n,value;
    string s,keep;
    cin>>test;
    while(test--)
    {
        cin>>n;
        map<string,int>mp;
        // vector<int>v;
        vector<string>v1;
        vector<int>v;
        getchar();
        rep(i,0,n)
        {
            getline(cin,s);
            if(i==0) keep=s;
            string ss="";
            rep(i,0,s.size())
            {
                if(s[i]!=' ')
                {
                    ss+=s[i];
                }
                else
                {
                    if(ss!="") mp[ss]++;
                    ss="";
                }
            }
            if(ss.size()!=0) mp[ss]++;
        }
        int num=0;
        string sss="";
        for(int j=0; j<keep.size(); j++)
        {
            if(keep[j]!=' ')
            {
                //num=num*10+(keep[j]-'0');
                sss+=keep[j];
            }
            else
            {
                if(sss!="") v1.push_back(sss);
                sss="";
            }
        }
        if(sss.size()!=0) v1.push_back(sss);

        for(int i=0; i<v1.size(); i++)
        {
            if(mp[v1[i]]==n)
            {
                string a=v1[i];
                int ans=0;
                for(int j=0; j<a.length(); j++)
                {
                    ans=ans*10+(a[j]-'0');

                }
                v.push_back(ans);
            }
        }
        sort(v.begin(),v.end());
        if(v.size()==0) cout<<"Empty"<<endl;
        else
        {
            //cout<<"v.size() = "<<v.size()<<endl;
            for(int i=0; i<v.size()-1; i++)
            {
                cout<<v[i]<<" ";
            }
            cout<<v[v.size()-1]<<endl;
        }


    }

}
