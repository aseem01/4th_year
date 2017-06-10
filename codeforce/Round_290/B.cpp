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
int dx[4]={ 0,0,1,-1};
int dy[4]={-1,1,0, 0};
char matrix[50][50];
int visit[51][51];
int dfs(int a,int b)
{
    rep(i,0,4)
    {
        int sx,sy;
        if(matrix[a+dx[i]][b+dy[i]]==matrix[a][b])
        {
            sx=a+dx[i];
            sy=b+dy[i];
            cout<<"sx = "<<sx<<" sy = "<<sy<<endl;
            cout<<"a = "<<a<<" b = "<<b<<endl;
            cout<<""
            if(!visit[sx][sy])
            {
                visit[sx][sy]=visit[a][b]+1;
                dfs(sx,sy);
            }
            else if(visit[a][b]-visit[sx][sy]>=3)
            {
                cout<<"Yes"<<endl;
                exit(0);
            }
        }
    }
    return 0;
}
int main()
{
    //freopen("a.in", "r", stdin);
    //freopen("a.out", "w", stdout);
    int row,col;
    while(cin>>row>>col)
    {
        rep(i,0,row) cin>>matrix[i];
        int res=0;
        rep(i,0,row)
        {
            rep(j,0,col)
            {
                if(!visit[i][j])
                {
                    cout<<"i = "<<i<<" j = "<<j<<endl;
                   int res=dfs(i,j);
                }
            }
        }
        cout<<"No"<<endl;
    }


}
