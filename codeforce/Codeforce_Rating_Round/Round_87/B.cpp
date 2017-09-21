/****************************************************************************\
                       Belief yourself,Respect yourself                       |
                                                                              |
        /\           /--------|   |--------|  |--------|    ----       ----   |
       /  \         /             |           |             | \         / |   |
      /    \       |              |           |             |  \       /  |   |
     /      \      |----|         |--------|  |--------|    |   \     /   |   |
    /--------\          |------|  |           |             |    -----    |   |
   /          \                |  |           |             |             |   |
  /            \               /  |           |             |             |   |
----          ---- |----------/   |--------|  |--------|  ----          ----  |
                                                                              |
*****************************************************************************/
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

//Bit Operation
bool checkBit(LL n, int i) { return n&(1LL<<i); }  //AND
LL setBit(LL n, int i) { return n|(1LL<<i);; }     //OR
LL resetBit(LL n, int i) { return n&(~(1LL<<i)); } //OFF

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

long long gcd(long long a, long long b) {
  while (b != 0) {
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
    int row,column,visit[10][10];
    string s[11];
    while(cin>>row>>column)
    {
       rep(i,0,row) cin>>s[i];
       rep(i,0,row)
       {
           rep(j,0,column)
           {
               visit[i][j]=0;
           }
       }
       int eat=0;
       rep(i,0,row)
       {
           rep(j,0,column)
           {
               if(s[i][j]=='W')
               {
                  int LR=j+1;
                  int RL=j-1;
                  int DU=i-1;
                  int UD=i+1;

                  if(DU>=0 && DU<=9 && visit[DU][j]==0 && s[DU][j]=='P')
                  {
                      eat++;
                      visit[DU][j]=1;

                  }
                  else if((LR>=0 && LR<=9 && visit[i][LR]==0 && s[i][LR]=='P')||(RL>=0 && RL<=9 && visit[i][RL]==0 && s[i][RL]=='P'))
                  {
                      //cout<<"I'm here"<<endl;
                     if((s[i+1][RL]=='W' && i+1<=9) && (s[i+1][LR]=='W' && i+1<=9)) eat++,visit[i][RL]=1;
                     else if((s[i+1][RL]=='W' && i+1<=9) && (s[i+1][LR]!='W' && i+1<=9)) eat++,visit[i][RL]=1;
                     else if((s[i+1][RL!='W' && i+1<=9]) && (s[i+1][LR]=='W' && i+1<=9)) eat++,visit[i][LR]=1;
                     else
                     {
                         if(s[i][RL]=='P' && visit[i][RL]==0)
                         {
                             eat++;
                             visit[i][RL]=1;
                         }
                         else if(s[i][LR]=='P' && visit[i][LR]==0)
                         {
                             eat++;
                             visit[i][LR]=1;
                         }
                     }
                  }
                   else if(UD>=0 && UD<=9 && visit[UD][j]==0 && s[UD][j]=='P') eat++,visit[UD][j]=1;
                  // cout<<"i = "<<i<<" j = "<<j<<" eat = "<<eat<<endl;
               }
           }
       }
       cout<<eat<<endl;
    }


}







