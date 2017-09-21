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
long long gcd(long long a, long long b)
{
    while (b != 0)
    {
        long long t = a % b;
        a = b;
        b = t;
    }
    return a;
}

//||--------------------------->||Main_Code_Start_From_Here||<---------------------------------||
const int dx[4]= {1,1,-1,-1};
const int dy[4]= {1,-1,1,-1};

int main()
{
    //freopen("a.in", "r", stdin);
    //freopen("a.out", "w", stdout);
    int r1,r2,c1,c2,dis[10][10];
    while(cin>>r1>>c1>>r2>>c2)
    {
        rep(i,1,9)
        {
            rep(j,1,9)
            {
                dis[i][j]=100;
            }
        }
        queue<pair<int,int>> Q;
        Q.push({r1,c1});
        dis[r1][c1]=0;
        while(!Q.empty())
        {
            auto current=Q.front();
            Q.pop();
            int x=current.first;
            int y=current.second;
            int c=dis[x][y]+1;
            //cout<<"x = "<<x<<" y = "<<y<<" c = "<<c<<endl<<endl<<endl<<endl;
            rep(i,0,4)
            {
                int xx=x;
                int yy=y;
                while(true)
                {
                    xx+=dx[i];
                    yy+=dy[i];
                    if(!(xx>=1 and xx<=8 and yy>=1 and yy<=8)) break;
                    //cout<<"xx = "<<xx<<" yy = "<<yy<<" i = "<<i<<endl;
                    if(dis[xx][yy]==100)
                    {
                        dis[xx][yy]=c;
                        Q.push({xx,yy});
                    }
                }
            }
        }

       /* rep(i,1,9)
        {
            rep(j,1,9)
            {
                cout<<dis[i][j]<<"     ";
            }
            cout<<endl;
        }*/

        if(dis[r2][c2]==100) cout<<"-1"<<endl;
        else cout<<dis[r2][c2]<<endl;
    }

}
