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
long long gcd(long long a, long long b) {
  while (b != 0) {
    long long t = a % b;
    a = b;
    b = t;
  }
  return a;
}

//||--------------------------->||Main_Code_Start_From_Here||<---------------------------------||
 LL ar[1001][1001];
int main()
{
    //freopen("a.in", "r", stdin);
    //freopen("a.out", "w", stdout);
    LL n,k,t1,t2,x,y;
    while(cin>>n>>k)
    {
      // memset(ar, 0, sizeof(ar[0][0]) * n * n);
      //rep(i,0,n) rep(j,0,n) ar[i][j]=0;
      map<LL,LL>mp;
        cin>>x>>y;
        rep(i,0,k)
        {
            cin>>t1>>t2;
            mp[t1-1][t2-1]=1;
        }

        //digonal checking ;
        LL cnt=0;
        /*rep(i,0,n)
        {
            rep(j,0,n) cout<<ar[i][j]<<" ";
            cout<<endl;
        }*/
        for(int i=x-2,j=y-2;i>=0 && j>=0;i--,j--)
        {
            if(mp[i+1][j+1]==0) cnt++;
            else break;
        }
        //cout<<"check1 = "<<cnt<<endl;
        for(int i=x,j=y;i<n && j<n;i++,j++)
        {
            if(mp[i+1][j+1]==0) cnt++;
            else break;
        }

        //cout<<"check2 = "<<cnt<<endl;


        ////digonal checking ;
        for(int i=x-2,j=y;i>=0 && j<n;i--,j++)
        {
            if(mp[i+1][j+1]==0) cnt++;
            else break;
        }
//cout<<"check3 = "<<cnt<<endl;
        for(int i=x,j=y-2;i<n && j>=0;i++,j--)
        {
            //cout<<"ar["<<i<<"]["<<j<<"] = "<<ar[i][j]<<endl;
            if(mp[i+1][j+1]==0) cnt++;
            else break;
        }

    ////cout<<"check4 = "<<cnt<<endl;





        //up checking
        for(int i=x-2,j=y-1;i>=0;i--)
        {
            if(mp[i+1][j+1]==0) cnt++;
            else break;
        }
        //cout<<"check1 = "<<cnt<<endl;
        for(int i=x,j=y-1;i<n;i++)
        {
            //cout<<"ar["<<i<<"]["<<j<<"] = "<<ar[i][j]<<endl;
            if(mp[i+1][j+1]==0) cnt++;
            else break;
        }

        //cout<<"check2 = "<<cnt<<endl;




        //Left Right Checking;

        for(int i=x-1,j=y-2;j>=0;j--)
        {
            if(mp[i+1][j+1]==0) cnt++;
            else break;
        }
        //cout<<"check1 = "<<cnt<<endl;
        for(int i=x-1,j=y;j<n;j++)
        {
            //cout<<"ar["<<i<<"]["<<j<<"] = "<<ar[i][j]<<endl;
            if(mp[i+1][j+1]==0) cnt++;
            else break;
        }

        //cout<<"check2 = "<<cnt<<endl;


        cout<<cnt<<endl;
        mp.clear();


    }

}
