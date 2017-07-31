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
LL ar[200010],br[200010],cr[200010],keep,voice[200010];
int main()
{
    //freopen("a.in", "r", stdin);
    //freopen("a.out", "w", stdout);
    int n,m,sub;
    vector<pair<int,int> > v;
    while(cin>>n)
    {
        memset(ar,0,sizeof(ar));
        memset(br,0,sizeof(br));
        memset(cr,0,sizeof(cr));
        memset(voice,0,sizeof(voice));
        rep(i,0,n)
        {
            cin>>keep;
            ar[keep]++;
        }
        cin>>m;
        int maximum=0;
        rep(i,0,m)
        {
            cin>>voice;
            table[i]=voice;
            br[i]=ar[voice[i]];
            if(br[i]>maximum)
            {
                maximum=br[i];
            }
        }
        rep(i,0,m)
        {
            cin>>sub;
            cr[i]=ar[sub];

        }
        //cout<<"maximum = "<<maximum<<endl;
        //cout<<"pos = "<<pos<<endl;
        int j;
        int minimum=0;
        for(j=0;j<m;j++)
        {
            if(ar[voice[j]]==maximum)
            {
                //cout<<"bb = "<<ar[voice[j]]<<endl;
                //cout<<"cc = "<<cr[j]<<endl;
               v.push_back(make_pair(cr[j],j+1));
               //if(pos==(j+1)) break;
               //pos++;
            }
        }
       sort(v.begin(),v.end());
       cout<<v[v.size()-1].second<<endl;
       v.clear();

    }


}
