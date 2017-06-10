//----->|try=0; while(!success) try++;|<------
//----->|Belief Yourself,Respect Yourself|<----
//----->|Be Proud Of Yourself,You're Doing Your best|<-----
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
#define AND(a,b) ((a) & (b))
#define OR(a,b) ((a)|(b))
#define XOR(a,b) ((a) ^ (b))
#define MP make_pair
#define sqr(x) ((x)*(x))
#define sqrt(x) sqrt(1.0*(x))
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

template<typename T> T BigMod(T b,T p,T m) //BigMod Calculation
{
    T r=1;
    while(p)
    {
        if(p&1)r=(r*b)%m;
        b=(b*b)%m;
        p>>=1;
    }
    return r;
}

//||--------------------------->||Main_Code_Start_From_Here||<---------------------------------||
map<char,int>num;
string S="Bulbbasaur";
string s;
int ans;
int main()
{
    //freopen("a.in", "r", stdin);
    //freopen("a.out", "w", stdout);
    while(cin>>s)
    {
        ans=0;
        num.clear();
        for(int i=0; i<s.size(); i++) num[s[i]]++;
        bool flag=1;
        while(flag)
        {
            flag=0;
            for(int i=0; i<=(int)S.size(); i++)
            {
                if(i==(int)S.size())
                {
                    flag=1;
                    break;
                }
                if(num[S[i]]>0) num[S[i]]--;
                else break;
            }
            ans+=flag;
        }
        cout<<ans<<endl;
    }


}

//In the name of God

#include <bits/stdc++.h>
using namespace std;
#define lol long long
const int MAXN=1e5+10;
int a[MAXN],cnt[MAXN];

int main()
{
    ios::sync_with_stdio(false);
    int n;
    cin>>n;
    bool has=false;
    for(int i=0; i<n; i++)
    {
        int x;
        cin>>x;
        if(x!=1)
            has=true;
        for(int j=1; j*j<=x; j++)
        {
            if(x%j)
                continue;
            cnt[j]++;
            if(x/j!=j)
                cnt[x/j]++;
        }
    }
    if(has==false)
        cout<<1<<endl;
    else
    {
        int ans=0;
        for(int i=2; i<MAXN; i++)
            ans=max(ans,cnt[i]);
        cout<<ans<<endl;
    }
    return 0;
}
