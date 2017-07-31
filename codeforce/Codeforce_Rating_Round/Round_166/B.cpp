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
const int MX=101000;
int prime[MX];
int visit[MX];
int ar[510][510],br[510][510];
void sieve()
{
    visit[0]=visit[1]=1;
    for(int i=2; i*i<MX; i++)
    {
        int k=0;
        if(!visit[i])
        {
            for(int j=i*i; j<MX; j+=i)
            {
                visit[j]=1;
            }
            prime[k++]=i;
        }
    }
}
int main()
{
    //freopen("a.in", "r", stdin);
    //freopen("a.out", "w", stdout);
    sieve();
    int row,col;
    while(cin>>row>>col)
    {
        rep(i,0,row)
        {
            rep(j,0,col)
            {
                cin>>ar[i][j];
            }
        }


        int cnt=0;
        rep(i,0,row)
        {
            //cnt=0;
            rep(j,0,col)
            {
                int keep=ar[i][j];
                //cout<<"keep = "<<keep<<endl;
                if(visit[keep])
                {
                    while(true)
                    {
                        keep++;
                        //cnt++;
                        if(visit[keep]==0) break;
                    }
                    br[i][j]=keep;
                }
                else
                {
                    br[i][j]=ar[i][j];
                }
            }
        }




         /*rep(i,0,row)
         {
             rep(j,0,col)
             {
                 cout<<br[i][j]<<" ";
             }
             cout<<endl;
         }*/

        //row check ;
        int sum=0;
        int minimum=INF_MAX;

        rep(i,0,row)
        {
            sum=0;
            rep(j,0,col)
            {
                sum+=(br[i][j]-ar[i][j]);
            }
            minimum=min(minimum,sum);
        }

        //coloum check

        rep(i,0,col)
        {
            sum=0;
            rep(j,0,row)
            {
                //cout<<"br = "<<br[j][i]<<" ar = "<<ar[j][i]<<endl;
                sum+=(br[j][i]-ar[j][i]);
            }
            //cout<<"sum = "<<sum<<" minimum = "<<minimum<<endl;
            minimum=min(minimum,sum);
        }

        cout<<minimum<<endl;




    }


}
