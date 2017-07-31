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
long long gcd(long long a, long long b) {
  while (b != 0) {
    long long t = a % b;
    a = b;
    b = t;
  }
  return a;
}

//||--------------------------->||Main_Code_Start_From_Here||<---------------------------------||
int lps(int seq[], int i, int j)
{
   // Base Case 1: If there is only 1 character
   if (i == j)
     return 1;

   // Base Case 2: If there are only 2 characters and both are same
   if (seq[i] == seq[j] && i + 1 == j)
     return 2;

   // If the first and last characters match
   if (seq[i] == seq[j])
      return lps (seq, i+1, j-1) + 2;

   // If the first and last characters do not match
   return max( lps(seq, i, j-1), lps(seq, i+1, j) );
}
int main()
{
     int n,k,m;
    int a[100010],b[100010],val[100010];
    while(cin>>n>>k>>m)
    {
        map<int,int>mp,mp1;
        rep(i,0,k)
        {
            cin>>a[i]>>b[i];
            mp[a[i]]=b[i];
            mp[b[i]]=a[i];
            //cout<<"mp[a[i]] = "<<mp[a[i]]<<endl;
            //cout<<"mp[b[i]] = "<<mp[b[i]]<<endl;
        }
        rep(i,0,m) cin>>val[i];
        int cnt=0;
        mp1[val[0]]=1;
        for(int i=1; i<m; i++)
        {
          cout<<"mp[val[i]] = "<<mp[val[i]]<<endl;
          cout<<"val[i] = "<<val[i]<<endl;
         if((mp[val[i]]==val[i-1])||(mp[mp[val[i]]]==val[i-1]))
         {
             mp1[val[i]]++;
             val[i]=val[i-1];
         }
         else
         {
             int t1=mp[val[i]];
             int t2=mp[mp[val[i]]];
             //if(t1==val[i-1]) mp1[val[i-1]]++, val[i]=val[i-1];
             //else if(t2==val[i-1]) mp1[val[i-1]]++,val[i]=val[i-1];
             if(mp1[t1]) val[i]=t1;
             else if(mp1[t2]) val[i]=t2;
         }

        }

     rep(i,0,m) cout<<val[i]<<" ";
     cout<<endl;
    cout<<lps(val,1,m)<<endl;
    }
}

