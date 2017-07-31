#include<bits/stdc++.h>
using namespace std;
#define uniq(x)  x.erase(unique(x.begin(),x.end()), x.end()) //Unique value find from vector
#define upper(arr,n,fixed) upper_bound(arr,arr+n,fixed)-arr  //Upper value search;
#define lower(arr,n,fixed) upper_bound(arr,arr+n,fixed)-arr  //Lower value search;
#define max3(a,b,c) max(max(a,b),c)//maximum value find three value;
#define min3(a,b,c) min(min(a,b),c)//minimum value find three value;
#define rep(i,intial,n) for(int i=intial; i<(n) ; i++)
#define REP(i,intial,n) for(int i=intial; i<=(n) ; i++)
#define PI acos(-1.0)//PI Calculation
#define LL long long
#define MP make_pair
#define INF_MAX 2147483647
#define INF_MIN -2147483647
#define MX 1000005
#define MOD 1000000007
template<typename T> T POW(T b,T p)          //Pow calculation
{
    T r=1;
    while(p)
    {
        if(p&1)r=(r*b);
        b=(b*b);
        p>>=1;
    }
    return r;
}

LL big_mod(LL n, LL p)
{
    if(p==0) return 1;
    if(!(p&1))
    {
        LL r = big_mod(n,p/2) % MOD;
        return ( (r%MOD) * (r%MOD) ) % MOD;
    }
    else return ( ( n%MOD) * (big_mod(n,p-1) %MOD)) % MOD;
}
long long gcd(long long a, long long b) {
  while (b != 0) {
    long long t = a % b;
    a = b;
    b = t;
  }
  return a;
}

//||--------------------------->||Main_Code_Start_From_Here||<---------------------------------||
int main()
{
    //freopen("a.in", "r", stdin);
    //freopen("a.out", "w", stdout);
    int tc;
    string s;
    cin>>tc;
    getchar();
    while(tc--)
    {
        getline(cin,s);
        string ss="";
        vector<string>v;
        rep(i,0,s.size())
        {
            if((s[i]>='a' && s[i]<='z') || (s[i]>='A' && s[i]<='Z'))
            {
                ss+=s[i];
            }
            else
            {
                v.push_back(ss);
                ss="";
            }
        }
        if(ss.size()!=0)
        v.push_back(ss);
        if(v.size()==1)
        {
            string s3=v[0];
            //cout<<"s3 = "<<s3<<endl;
            if(s3[0]>='a' && s3[0]<='z')
            {
               int c=s3[0];
               printf("%c",c-32);
            }
            else cout<<s3[0];
            for(int i=1;i<s3.size();i++)
            {
                if(s3[i]>='A' && s3[i]<='Z')
                {
                    int c=s3[i];
                    printf("%c",c+32);
                }
                else cout<<s3[i];
            }
            cout<<endl;
        }
        else if(v.size()==2)
        {
            string s3=v[0];
            if(s3[0]>='a' && s3[0]<='z')
            {
               int c=s3[0];
               printf("%c",c-32);
            }
            else cout<<s3[0];
            cout<<". ";




             s3=v[1];
            if(s3[0]>='a' && s3[0]<='z')
            {
               int c=s3[0];
               printf("%c",c-32);
            }
            else cout<<s3[0];
            for(int i=1;i<s3.size();i++)
            {
                if(s3[i]>='A' && s3[i]<='Z')
                {
                    int c=s3[i];
                    printf("%c",c+32);
                }
                else cout<<s3[i];
            }
            cout<<endl;


        }
        else if(v.size()==3)
        {
            string s3=v[0];
            if(s3[0]>='a' && s3[0]<='z')
            {
               int c=s3[0];
               printf("%c",c-32);
            }
            else cout<<s3[0];
            cout<<". ";




             s3=v[1];
            if(s3[0]>='a' && s3[0]<='z')
            {
               int c=s3[0];
               printf("%c",c-32);
            }
            else cout<<s3[0];
            cout<<". ";





             s3=v[2];
            if(s3[0]>='a' && s3[0]<='z')
            {
               int c=s3[0];
               printf("%c",c-32);
            }
            else cout<<s3[0];
            for(int i=1;i<s3.size();i++)
            {
                if(s3[i]>='A' && s3[i]<='Z')
                {
                    int c=s3[i];
                    printf("%c",c+32);
                }
                else cout<<s3[i];
            }
            cout<<endl;
        }

    }

}

