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
char s[10][10];
bool go(int x,int y)
{
    if(x<0 || x>=10 || y<0 || y>=10) return false;
    if(s[x][y]=='X') return true;
    return false;
}

bool horizontal(int x,int y)
{
    int cnt=1;
    for(int i=y+1; go(x,i); i++) cnt++;
    for(int i=y-1; go(x,i); i--) cnt++;
    //cout<<"cnt1 = "<<cnt<<endl;
    if(cnt>=5) return true;
    else return false;
    //return cnt>=5;
}

bool vertical(int x,int y)
{
    int cnt=1;
    for(int i=x+1; go(i,y); i++) cnt++;
    for(int i=x-1; go(i,y); i--) cnt++;
   // cout<<"cnt2 = "<<cnt<<endl;
    if(cnt>=5) return true;
    else return false;
    //return cnt>=5;
}

bool Leftdiagonal(int x,int y)
{
    int cnt=1;
    for(int i=x+1,j=y+1; go(i,j); i++,j++) cnt++;
    for(int i=x-1,j=y-1; go(i,j); i--,j--) cnt++;
    //cout<<"cnt3 = "<<cnt<<endl;
    if(cnt>=5) return true;
    else return false;
    //return cnt>=5;
}

bool Rightdiagonal(int x,int y)
{
    int cnt=1;
    for(int i=x+1,j=y-1; go(i,j); i++,j--) cnt++;
    for(int i=x-1,j=y+1; go(i,j); i--,j++) cnt++;
    //cout<<"cnt4 = "<<cnt<<endl;
    if(cnt>=5) return true;
    else return false;
   // return cnt>=5;

}
int main()
{
    //freopen("a.in", "r", stdin);
    //freopen("a.out", "w", stdout);
    rep(i,0,10) cin>>s[i];
    int flag=0;
    rep(i,0,10)
    {
        rep(j,0,10)
        {
            if(s[i][j]=='X' || s[i][j]=='.')
            {
                if(horizontal(i,j) || vertical(i,j) || Leftdiagonal(i,j) || Rightdiagonal(i,j))
                {
                    cout<<"YES"<<endl;
                    return 0;
                }
            }
        }
    }
    cout<<"NO"<<endl;
    return 0;

}
