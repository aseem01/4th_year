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
    int flag;
    string s[5];
    while(cin>>s[0])
    {
        rep(i,1,4) cin>>s[i];
        flag=0;
        rep(i,0,4)
        {
            rep(j,0,4)
            {
                if(s[i][j]=='.')
                {
                    s[i][j]='x';

                    // row checking 0-2;
                    if(s[0][0]=='x' && s[0][1]=='x' && s[0][2]=='x') flag=1;
                    if(s[1][0]=='x' && s[1][1]=='x' && s[1][2]=='x') flag=1;
                    if(s[2][0]=='x' && s[2][1]=='x' && s[2][2]=='x') flag=1;
                    if(s[3][0]=='x' && s[3][1]=='x' && s[3][2]=='x') flag=1;
                    //cout<<"flag1 = "<<flag<<endl;

                    //row checking 1-3;
                    if(s[0][1]=='x' && s[0][2]=='x' && s[0][3]=='x') flag=1;
                    if(s[1][1]=='x' && s[1][2]=='x' && s[1][3]=='x') flag=1;
                    if(s[2][1]=='x' && s[2][2]=='x' && s[2][3]=='x') flag=1;
                    if(s[3][1]=='x' && s[3][2]=='x' && s[3][3]=='x') flag=1;
                    //cout<<"flag2 = "<<flag<<endl;

                    //coloum checking 0-2;
                    if(s[0][0]=='x' && s[1][0]=='x' && s[2][0]=='x') flag=1;
                    if(s[0][1]=='x' && s[1][1]=='x' && s[2][1]=='x') flag=1;
                    if(s[0][2]=='x' && s[1][2]=='x' && s[2][2]=='x') flag=1;
                    if(s[0][3]=='x' && s[1][3]=='x' && s[2][3]=='x') flag=1;
                    //cout<<"flag3 = "<<flag<<endl;

                    //coloum checking 1-3;
                    if(s[1][0]=='x' && s[2][0]=='x' && s[3][0]=='x') flag=1;
                    if(s[1][1]=='x' && s[2][1]=='x' && s[3][1]=='x') flag=1;
                    if(s[1][2]=='x' && s[2][2]=='x' && s[3][2]=='x') flag=1;
                    if(s[1][3]=='x' && s[2][3]=='x' && s[3][3]=='x') flag=1;
                    //cout<<"flag4 = "<<flag<<endl;

                    //left diogonal checking;
                    if(s[0][0]=='x' && s[1][1]=='x' && s[2][2]=='x') flag=1;
                    if(s[1][1]=='x' && s[2][2]=='x' && s[3][3]=='x') flag=1;
                    if(s[0][1]=='x' && s[1][2]=='x' && s[2][3]=='x') flag=1;
                    if(s[1][0]=='x' && s[2][1]=='x' && s[3][2]=='x') flag=1;
                    //cout<<"flag5 = "<<flag<<endl;

                    //right diogonal checking;
                    if(s[0][3]=='x' && s[1][2]=='x' && s[2][1]=='x') flag=1;
                    if(s[1][2]=='x' && s[2][1]=='x' && s[3][0]=='x') flag=1;
                    if(s[0][2]=='x' && s[1][1]=='x' && s[2][0]=='x') flag=1;
                    if(s[1][3]=='x' && s[2][2]=='x' && s[3][1]=='x') flag=1;
                    //cout<<"flag6 = "<<flag<<endl;



                    //last;
                    s[i][j]='.';
                    if(flag) break;

                }
            }
            if(flag) break;
        }
        if(flag) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }


}
