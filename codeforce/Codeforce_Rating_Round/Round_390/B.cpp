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
    int n;
    string s[5];
    for(int i=0;i<4;i++) cin>>s[i];
    int xcnt=0;
    int ocnt=0;
    int flag=0;
    for(int i=0;i<4;i++)
    {
        for(int j=0;j<4;j++)
        {
            if(s[i][j]=='x') xcnt++;
            if(s[i][j]=='o') ocnt++;
        }
    }

        if(xcnt>=ocnt)
        {
            // x checking;
            //row checking;
            //first left row up checking;






            if(s[0][0]=='x' && s[0][1]=='x' && s[0][2]=='x') flag=1;
            if(s[0][1]=='x' && s[0][2]=='x' && s[0][3]=='x') flag=1;
            if(s[1][0]=='x' && s[1][1]=='x' && s[1][2]=='x') flag=1;
            if(s[1][1]=='x' && s[1][2]=='x' && s[1][3]=='x') flag=1;
            if(s[2][0]=='x' && s[2][1]=='x' && s[2][2]=='x') flag=1;
            if(s[2][1]=='x' && s[2][2]=='x' && s[2][3]=='x') flag=1;
            if(s[3][0]=='x' && s[3][1]=='x' && s[3][2]=='x') flag=1;
            if(s[3][1]=='x' && s[2][2]=='x' && s[3][3]=='x') flag=1;


            //Right row up checking


            if(s[0][3]=='x' && s[0][2]=='x' && s[0][1]=='x') flag=1;
            if(s[0][2]=='x' && s[0][1]=='x' && s[0][0]=='x') flag=1;
            if(s[1][3]=='x' && s[1][2]=='x' && s[1][1]=='x') flag=1;
            if(s[1][2]=='x' && s[1][1]=='x' && s[1][0]=='x') flag=1;
            if(s[2][3]=='x' && s[2][2]=='x' && s[2][1]=='x') flag=1;
            if(s[2][2]=='x' && s[2][1]=='x' && s[2][0]=='x') flag=1;
            if(s[3][3]=='x' && s[3][2]=='x' && s[3][1]=='x') flag=1;
            if(s[3][2]=='x' && s[2][1]=='x' && s[3][0]=='x') flag=1;




            // down checking left row ;


            if(s[3][0]=='x' && s[3][1]=='x' && s[3][2]=='x') flag=1;
            if(s[3][1]=='x' && s[3][2]=='x' && s[3][3]=='x') flag=1;
            if(s[2][0]=='x' && s[2][1]=='x' && s[2][2]=='x') flag=1;
            if(s[2][1]=='x' && s[2][2]=='x' && s[2][3]=='x') flag=1;
            if(s[1][0]=='x' && s[1][1]=='x' && s[1][2]=='x') flag=1;
            if(s[1][1]=='x' && s[1][2]=='x' && s[1][3]=='x') flag=1;
            if(s[0][0]=='x' && s[0][1]=='x' && s[0][2]=='x') flag=1;
            if(s[0][1]=='x' && s[0][2]=='x' && s[0][3]=='x') flag=1;


            // down checking Right row ;



            if(s[3][3]=='x' && s[3][2]=='x' && s[3][1]=='x') flag=1;
            if(s[3][2]=='x' && s[3][1]=='x' && s[3][0]=='x') flag=1;
            if(s[2][3]=='x' && s[2][2]=='x' && s[2][1]=='x') flag=1;
            if(s[2][2]=='x' && s[2][1]=='x' && s[2][0]=='x') flag=1;
            if(s[1][3]=='x' && s[1][2]=='x' && s[1][1]=='x') flag=1;
            if(s[1][2]=='x' && s[1][1]=='x' && s[1][0]=='x') flag=1;
            if(s[0][3]=='x' && s[0][2]=='x' && s[0][1]=='x') flag=1;
            if(s[0][2]=='x' && s[0][1]=='x' && s[0][0]=='x') flag=1;





            //coloum  up left checking
            if(s[0][0]=='x' && s[1][0]=='x' && s[1][0]=='x') flag=1;
            if(s[1][0]=='x' && s[2][0]=='x' && s[3][0]=='x') flag=1;
            if(s[0][1]=='x' && s[1][1]=='x' && s[2][1]=='x') flag=1;
            if(s[1][1]=='x' && s[2][1]=='x' && s[3][1]=='x') flag=1;
            if(s[0][2]=='x' && s[1][2]=='x' && s[2][2]=='x') flag=1;
            if(s[1][2]=='x' && s[2][2]=='x' && s[3][2]=='x') flag=1;
            if(s[0][3]=='x' && s[1][3]=='x' && s[2][3]=='x') flag=1;
            if(s[1][3]=='x' && s[2][3]=='x' && s[3][3]=='x') flag=1;


            //coloum up right checking ;

            if(s[0][3]=='x' && s[1][3]=='x' && s[2][3]=='x') flag=1;
            if(s[1][3]=='x' && s[2][3]=='x' && s[3][3]=='x') flag=1;
            if(s[0][2]=='x' && s[1][2]=='x' && s[2][2]=='x') flag=1;
            if(s[1][2]=='x' && s[2][2]=='x' && s[3][2]=='x') flag=1;
            if(s[0][1]=='x' && s[1][1]=='x' && s[2][1]=='x') flag=1;
            if(s[1][1]=='x' && s[2][1]=='x' && s[3][1]=='x') flag=1;
            if(s[0][0]=='x' && s[1][0]=='x' && s[2][0]=='x') flag=1;
            if(s[1][0]=='x' && s[2][0]=='x' && s[3][0]=='x') flag=1;



            //coloum down left checking;
            if(s[3][0]=='x' && s[2][0]=='x' && s[1][0]=='x') flag=1;
            if(s[2][0]=='x' && s[1][0]=='x' && s[0][0]=='x') flag=1;
            if(s[3][1]=='x' && s[2][1]=='x' && s[1][1]=='x') flag=1;
            if(s[2][1]=='x' && s[1][1]=='x' && s[0][1]=='x') flag=1;
            if(s[3][2]=='x' && s[2][2]=='x' && s[1][2]=='x') flag=1;
            if(s[2][2]=='x' && s[1][2]=='x' && s[0][2]=='x') flag=1;
            if(s[3][3]=='x' && s[2][3]=='x' && s[1][3]=='x') flag=1;
            if(s[2][3]=='x' && s[1][3]=='x' && s[0][3]=='x') flag=1;


            //coloum down right checking;
            if(s[3][3]=='x' && s[2][3]=='x' && s[1][3]=='x') flag=1;
            if(s[2][3]=='x' && s[1][3]=='x' && s[0][3]=='x') flag=1;
            if(s[3][2]=='x' && s[2][2]=='x' && s[1][2]=='x') flag=1;
            if(s[2][2]=='x' && s[1][2]=='x' && s[0][2]=='x') flag=1;
            if(s[3][1]=='x' && s[2][1]=='x' && s[1][1]=='x') flag=1;
            if(s[2][1]=='x' && s[1][1]=='x' && s[0][1]=='x') flag=1;
            if(s[3][0]=='x' && s[2][0]=='x' && s[1][0]=='x') flag=1;
            if(s[2][0]=='x' && s[1][0]=='x' && s[0][0]=='x') flag=1;



            //digonal checking;

            if(s[0][0]=='x' && s[1][1]=='x' && s[2][2]=='x') flag=1;
            if(s[1][1]=='x' && s[2][2]=='x' && s[3][3]=='x') flag=1;
            if(s[3][3]=='x' && s[2][2]=='x' && s[1][1]=='x') flag=1;
            if(s[2][2]=='x' && s[1][1]=='x' && s[0][0]=='x') flag=1;


            if(s[0][3]=='x' && s[1][2]=='x' && s[2][1]=='x') flag=1;
            if(s[1][2]=='x' && s[2][1]=='x' && s[3][0]=='x') flag=1;
            if(s[3][0]=='x' && s[2][1]=='x' && s[1][2]=='x') flag=1;
            if(s[2][1]=='x' && s[1][2]=='x' && s[3][0]=='x') flag=1;


            //extra
            if(s[0][2]=='x' && s[1][1]=='x' && s[2][0]=='x') flag=1;
            if(s[1][3]=='x' && s[2][2]=='x' && s[3][1]=='x') flag=1;



        }
        else

        {




           for(int i=0;i<4;i++)
            {
                for(int j=0;j<4;j++)
                {
                    if(s[i][j]=='.') s[i][j]='o';
                }
            }

            // x checking;
            //row checking;
            //first left row up checking;


            if(s[0][0]=='o' && s[0][1]=='o' && s[0][2]=='o') flag=1;
            if(s[0][1]=='o' && s[0][2]=='o' && s[0][3]=='o') flag=1;
            if(s[1][0]=='o' && s[1][1]=='o' && s[1][2]=='o') flag=1;
            if(s[1][1]=='o' && s[1][2]=='o' && s[1][3]=='o') flag=1;
            if(s[2][0]=='o' && s[2][1]=='o' && s[2][2]=='o') flag=1;
            if(s[2][1]=='o' && s[2][2]=='o' && s[2][3]=='o') flag=1;
            if(s[3][0]=='o' && s[3][1]=='o' && s[3][2]=='o') flag=1;
            if(s[3][1]=='o' && s[2][2]=='o' && s[3][3]=='o') flag=1;


            //Right row up checking


            if(s[0][3]=='o' && s[0][2]=='o' && s[0][1]=='o') flag=1;
            if(s[0][2]=='o' && s[0][1]=='o' && s[0][0]=='o') flag=1;
            if(s[1][3]=='o' && s[1][2]=='o' && s[1][1]=='o') flag=1;
            if(s[1][2]=='o' && s[1][1]=='o' && s[1][0]=='o') flag=1;
            if(s[2][3]=='o' && s[2][2]=='o' && s[2][1]=='o') flag=1;
            if(s[2][2]=='o' && s[2][1]=='o' && s[2][0]=='o') flag=1;
            if(s[3][3]=='o' && s[3][2]=='o' && s[3][1]=='o') flag=1;
            if(s[3][2]=='o' && s[2][1]=='o' && s[3][0]=='o') flag=1;




            // down checking left row ;


            if(s[3][0]=='o' && s[3][1]=='o' && s[3][2]=='o') flag=1;
            if(s[3][1]=='o' && s[3][2]=='o' && s[3][3]=='o') flag=1;
            if(s[2][0]=='o' && s[2][1]=='o' && s[2][2]=='o') flag=1;
            if(s[2][1]=='o' && s[2][2]=='o' && s[2][3]=='o') flag=1;
            if(s[1][0]=='o' && s[1][1]=='o' && s[1][2]=='o') flag=1;
            if(s[1][1]=='o' && s[1][2]=='o' && s[1][3]=='o') flag=1;
            if(s[0][0]=='o' && s[0][1]=='o' && s[0][2]=='o') flag=1;
            if(s[0][1]=='o' && s[0][2]=='o' && s[0][3]=='o') flag=1;


            // down checking Right row ;



            if(s[3][3]=='o' && s[3][2]=='o' && s[3][1]=='o') flag=1;
            if(s[3][2]=='o' && s[3][1]=='o' && s[3][0]=='o') flag=1;
            if(s[2][3]=='o' && s[2][2]=='o' && s[2][1]=='o') flag=1;
            if(s[2][2]=='o' && s[2][1]=='o' && s[2][0]=='o') flag=1;
            if(s[1][3]=='o' && s[1][2]=='o' && s[1][1]=='o') flag=1;
            if(s[1][2]=='o' && s[1][1]=='o' && s[1][0]=='o') flag=1;
            if(s[0][3]=='o' && s[0][2]=='o' && s[0][1]=='o') flag=1;
            if(s[0][2]=='o' && s[0][1]=='o' && s[0][0]=='o') flag=1;





            //coloum  up left checking
            if(s[0][0]=='o' && s[1][0]=='o' && s[1][0]=='o') flag=1;
            if(s[1][0]=='o' && s[2][0]=='o' && s[3][0]=='o') flag=1;
            if(s[0][1]=='o' && s[1][1]=='o' && s[2][1]=='o') flag=1;
            if(s[1][1]=='o' && s[2][1]=='o' && s[3][1]=='o') flag=1;
            if(s[0][2]=='o' && s[1][2]=='o' && s[2][2]=='o') flag=1;
            if(s[1][2]=='o' && s[2][2]=='o' && s[3][2]=='o') flag=1;
            if(s[0][3]=='o' && s[1][3]=='o' && s[2][3]=='o') flag=1;
            if(s[1][3]=='o' && s[2][3]=='o' && s[3][3]=='o') flag=1;


            //coloum up right checking ;

            if(s[0][3]=='o' && s[1][3]=='o' && s[2][3]=='o') flag=1;
            if(s[1][3]=='o' && s[2][3]=='o' && s[3][3]=='o') flag=1;
            if(s[0][2]=='o' && s[1][2]=='o' && s[2][2]=='o') flag=1;
            if(s[1][2]=='o' && s[2][2]=='o' && s[3][2]=='o') flag=1;
            if(s[0][1]=='o' && s[1][1]=='o' && s[2][1]=='o') flag=1;
            if(s[1][1]=='o' && s[2][1]=='o' && s[3][1]=='o') flag=1;
            if(s[0][0]=='o' && s[1][0]=='o' && s[2][0]=='o') flag=1;
            if(s[1][0]=='o' && s[2][0]=='o' && s[3][0]=='o') flag=1;



            //coloum down left checking;
            if(s[3][0]=='o' && s[2][0]=='o' && s[1][0]=='o') flag=1;
            if(s[2][0]=='o' && s[1][0]=='o' && s[0][0]=='o') flag=1;
            if(s[3][1]=='o' && s[2][1]=='o' && s[1][1]=='o') flag=1;
            if(s[2][1]=='o' && s[1][1]=='o' && s[0][1]=='o') flag=1;
            if(s[3][2]=='o' && s[2][2]=='o' && s[1][2]=='o') flag=1;
            if(s[2][2]=='o' && s[1][2]=='o' && s[0][2]=='o') flag=1;
            if(s[3][3]=='o' && s[2][3]=='o' && s[1][3]=='o') flag=1;
            if(s[2][3]=='o' && s[1][3]=='o' && s[0][3]=='o') flag=1;


            //coloum down right checking;
            if(s[3][3]=='o' && s[2][3]=='o' && s[1][3]=='o') flag=1;
            if(s[2][3]=='o' && s[1][3]=='o' && s[0][3]=='o') flag=1;
            if(s[3][2]=='o' && s[2][2]=='o' && s[1][2]=='o') flag=1;
            if(s[2][2]=='o' && s[1][2]=='o' && s[0][2]=='o') flag=1;
            if(s[3][1]=='o' && s[2][1]=='o' && s[1][1]=='o') flag=1;
            if(s[2][1]=='o' && s[1][1]=='o' && s[0][1]=='o') flag=1;
            if(s[3][0]=='o' && s[2][0]=='o' && s[1][0]=='o') flag=1;
            if(s[2][0]=='o' && s[1][0]=='o' && s[0][0]=='o') flag=1;



            //digonal checking;

            if(s[0][0]=='o' && s[1][1]=='o' && s[2][2]=='o') flag=1;
            if(s[1][1]=='o' && s[2][2]=='o' && s[3][3]=='o') flag=1;
            if(s[3][3]=='o' && s[2][2]=='o' && s[1][1]=='o') flag=1;
            if(s[2][2]=='o' && s[1][1]=='o' && s[0][0]=='o') flag=1;


            if(s[0][3]=='o' && s[1][2]=='o' && s[2][1]=='o') flag=1;
            if(s[1][2]=='o' && s[2][1]=='o' && s[3][0]=='o') flag=1;
            if(s[3][0]=='o' && s[2][1]=='o' && s[1][2]=='o') flag=1;
            if(s[2][1]=='o' && s[1][2]=='o' && s[3][0]=='o') flag=1;


            //extra
            if(s[0][2]=='o' && s[1][1]=='o' && s[2][0]=='o') flag=1;
            if(s[1][3]=='o' && s[2][2]=='o' && s[3][1]=='o') flag=1;





        }

        if(flag) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;



}
