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
int main()
{
    //freopen("a.in", "r", stdin);
    //freopen("a.out", "w", stdout);
    int scien,lan,movie,audio;
    while(cin>>scien)
    {
        vector<int>lan(scien);
        map<int,int>cnt;
        //cnt.clear();
        // memset(&cnt[0], 0, sizeof(cnt[0]) * cnt.size());
        // cout<<cnt[1]<<endl;
        rep(i,0,scien)
        {
            cin>>lan[i];
            cnt[lan[i]]++;
        }
        //for(int i=1;i<=10;i++) cout<<cnt[i]<<endl;
        cin>>movie;
        vector<int>subtile(movie+10);
        vector<int>audio(movie+10);
        int maximum=0;
        rep(i,0,movie)
        {
            cin>>audio[i];
            //cout<<"cnt = "<<cnt[audio[i]]<<endl;
            if(maximum<cnt[audio[i]])
            {

                maximum=cnt[audio[i]];
            }
            //cin>>subtile[i];

        }
        rep(i,0,movie) cin>>subtile[i];
        //cout<<"maximum = "<<maximum<<endl;
        int pos=1;
        int most=0;
        rep(i,0,movie)
        {
            //cout<<"cnt[audio[i]] = "<<cnt[audio[i]]<<" audio[i] = "<<audio[i]<<endl;
            if(cnt[audio[i]]==maximum)
            {
                //cout<<"cnt[subtile[i]] = "<<cnt[subtile[i]]<<" subtile[i] = "<<subtile[i]<<endl;
                if(most<=cnt[subtile[i]])
                {
                    most=cnt[subtile[i]];
                    pos=i+1;
                }
            }
        }
        cout<<pos<<endl;
    }


}
