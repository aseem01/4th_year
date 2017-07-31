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
int main()
{
    //freopen("a.in", "r", stdin);
    //freopen("a.out", "w", stdout);
    string s[10];
    for(int i=0; i<10; i++)
    {
        cin>>s[i];
        s[i]+="ooooo";
    }
    int cnt=1;
    for(int i=0; i<10; i++)
    {
        for(int j=0; j<10; j++)
        {
            if(s[i][j]=='X')
            {
                //ROW checking;
                if(s[i][j+1]=='X') cnt++;
                if(s[i][j+2]=='X') cnt++;
                if(s[i][j+3]=='X') cnt++;
                if(j+4<=9)
                {
                    if(s[i][j+4]=='X') cnt++;
                }


                if(cnt==4)
                {
                    if(s[i][j+1]=='.') cnt++;
                    if(s[i][j+2]=='.') cnt++;
                    if(s[i][j+3]=='.') cnt++;
                    if(j+4>9)
                    {
                        if(s[i][j-1]=='.') cnt++;
                    }
                    else
                    {

                    if(s[i][j+4]=='.') cnt++;
                    }
                    if(cnt==5)
                    {
                        cout<<"YES"<<endl;
                        return 0;
                    }
                }
                else cnt=1;




                //Coloum checking
                if(s[i+1][j]=='X') cnt++;
                if(s[i+2][j]=='X') cnt++;
                if(s[i+3][j]=='X') cnt++;
                if(i+4<=9)
                {
                if(s[i+4][j]=='X') cnt++;
                }
                if(cnt==4)
                {
                    if(s[i+1][j]=='.') cnt++;
                    if(s[i+2][j]=='.') cnt++;
                    if(s[i+3][j]=='.') cnt++;
                    if(i+4>9)
                    {
                    if(s[i-1][j]=='.') cnt++;
                    }
                    else
                    {
                        if(s[i+1][j]=='.') cnt++;
                    }
                    if(cnt==5)
                    {
                        cout<<"YES"<<endl;
                        return 0;
                    }
                    else cnt=1;
                }





                //Digonal left to Right
                if(s[i+1][j+1]=='X') cnt++;
                if(s[i+2][j+2]=='X') cnt++;
                if(s[i+3][j+3]=='X') cnt++;
                if(i+4<=9 && j+4<=9)
                {
                if(s[i+4][j+4]=='X') cnt++;
                }

                if(cnt==4)
                {
                    if(s[i+1][j+1]=='.') cnt++;
                    if(s[i+2][j+2]=='.') cnt++;
                    if(s[i+3][j+3]=='.') cnt++;
                    if(i+4>9 || j+4>9)
                    {
                        if(s[i-1][j-1]=='.') cnt++;
                    }
                    else
                    {
                    if(s[i+4][j+4]=='.') cnt++;
                    }
                    if(cnt==5)
                    {
                        cout<<"YES"<<endl;
                        return 0;
                    }
                    else cnt=1;
                }




                //Digonal Right to left
                if(s[i+1][j-1]=='X') cnt++;
                if(s[i+2][j-2]=='X') cnt++;
                if(s[i+3][j-3]=='X') cnt++;
                if(i+4<=9 && j-4>=0)
                {
                if(s[i+4][j-4]=='X') cnt++;
                }
                if(cnt==4)
                {
                    if(s[i+1][j-1]=='.') cnt++;
                    if(s[i+2][j-2]=='.') cnt++;
                    if(s[i+3][j-3]=='.') cnt++;
                    if(i+4>9 || j-4<0)
                    {
                    if(s[i-1][j]=='.') cnt++;
                    }
                    if(cnt==5)
                    {
                        cout<<"YES"<<endl;
                        return 0;
                    }
                    else cnt=1;
                }

            }
        }
    }
    cout<<"NO"<<endl;

}

