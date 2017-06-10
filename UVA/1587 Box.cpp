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


struct face
{
    int x,y;
} ar[6];




int cmp(face a,face b)
{
    if(a.x==b.x) return a.y<b.y;
    return a.x<b.x;
}





int main()
{
    //freopen("a.in", "r", stdin);
    //freopen("a.out", "w", stdout);

    while(true)
    {

        rep(i,0,6)
        {
            cin>>ar[i].x>>ar[i].y;
        }

        set<int>s;

        rep(i,0,6)
        {
            if(ar[i].x>ar[i].y)
            {
                swap(ar[i].x,ar[i].y);
            }
            s.insert(ar[i].x);
            s.insert(ar[i].y);
        }

        if(s.size()>3)
        {
            cout<<"IMPOSSIBLE"<<endl;
            continue;
        }
        else
        {
            sort(ar,ar+6,cmp);
            if(memcmp(ar,ar+1,sizeof(face)) || memcmp(ar+2,ar+3,sizeof(face)) || memcmp(ar+3,ar+4,sizeof(face)))
            {
                cout<<"IMPOSSIBLE"<<endl;
                continue;
            }

            if(ar[0].x!=ar[2].x || ar[0].y!=ar[4].x || ar[2].y!=ar[4].y)
            {
                cout<<"IMPOSSIBLE"<<endl;
                continue;
            }

            cout<<"POSSIBLE"<<endl;


        }

    }


}
