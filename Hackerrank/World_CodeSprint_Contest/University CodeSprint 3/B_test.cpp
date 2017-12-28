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
    int ar[310][310],n,row,col,weight,query,temp1,temp2,keep;
    while(cin>>n>>query)
    {
       rep(i,0,n) rep(j,0,n) ar[i][j]=0;
       rep(i,0,query)
       {
           cin>>row>>col>>weight;
           /*Right checking
           temp=weight;
           for(int i=col;i<=col+weight && temp>=0;i++) ar[row][i]=temp,temp-=1;
           //left checking
           temp=weight;
           for(int i=col;i>=0 && temp>=0;i--) ar[row][i]=temp,temp-=1;
           //up checking
           temp=weight;
           for(int i=row;i>=0 && temp>=0;i--) ar[i][col]=temp,temp-=1;
           //down checking
           temp=weight;
           for(int i=row;i<=row+weight && temp>=0;i++) ar[i][col]=temp,temp-=1;

           //left up diagonal
           temp=weight;
           for(int i=row,j=col;temp>=0;i--,j--) ar[i][j]=temp,temp-=1;

           //right up diagonal
           temp=weight;
           for(int i=row,j=col;temp>=0;i--,j++) ar[i][j]=temp,temp-=1;

           //left down diagonal
           temp=weight;
           for(int i=row,j=col;temp>=0;i++,j--) ar[i][j]=temp,temp-=1;

           //Right down diagonal
           temp=weight;
           for(int i=row,j=col;temp>=0;i++,j++) ar[i][j]=temp,temp-=1;
            */



            //Right down checking
            temp1=weight;
           for(int i=col;temp1>=0;i++)
           {
               temp2=weight;
               for(int j=row;temp2>=0;j++)
               {
                   ar[i][j]+=temp2;
                   temp2-=1;
               }
               temp1-=1;
           }

           //Left down checking
           temp1=weight;
           keep=col;
           for(int i=row+1;temp1>=0;i++)
           {
               temp2=weight;
               for(int j=row,k=keep;temp2>=0;j++)
               {
                   ar[i][k]+=temp2;
                   temp2-=1;
               }
               keep--;
               temp1-=1;

           }



       }


       for(int i=0;i<n;i++)
       {
           for(int j=0;j<n;j++)
           {
               cout<<ar[i][j]<<" ";
           }
           cout<<endl;
       }
       cout<<endl;


    }


}









