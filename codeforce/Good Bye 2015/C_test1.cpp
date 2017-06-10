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
#define MAX 1000005
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
const int MX=2010;
int hori[MX][MX];
int ver[MX][MX];
int row,col;
string s[2001];
void go()
{
   rep(i,0,row)
   {
       rep(j,1,col)
       {
           hori[i][j]=hori[i][j-1];
           if(s[i][j]=='.' && s[i][j-1]=='.') hori[i][j]++;
           //cout<<"hori[i][j] = "<<hori[i][j]<<" i = "<<i<<" j = "<<j<<endl;
       }
   }



   rep(i,0,col)
   {
       rep(j,1,row)
       {
           ver[j][i]=ver[j-1][i];
           if(s[j][i]=='.' && s[j-1][i]=='.') ver[j][i]++;
           //cout<<"ver[j][i] = "<<ver[j][i]<<" j = "<<j<<" i = "<<i<<endl;
       }
   }


}
int main()
{
    //freopen("a.in", "r", stdin);
    //freopen("a.out", "w", stdout);
    while(cin>>row>>col)
    {
        rep(i,0,row) cin>>s[i];
        go();
        int query;
        cin>>query;
        int r1,r2,c1,c2;
        while(query--)
        {
            cin>>r1>>c1>>r2>>c2;
            r1--;
            c1--;
            r2--;
            c2--;
            int ans=0;
            rep(i,r1,r2+1)
            {
                //cout<<"hori[i][c2] = "<<hori[i][c2]<<" hori[i][c1] = "<<hori[i][c1]<<endl;
                ans+=hori[i][c2]-hori[i][c1];
            }
            rep(i,c1,c2+1)
            {
                //cout<<"ver[r2][i] = "<<ver[r2][i]<<" ver[r1][i] = "<<ver[r1][i]<<endl;
                ans+=ver[r2][i]-ver[r1][i];
            }
            cout<<ans<<endl;
        }
    }
}
