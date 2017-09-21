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
int main()
{
    //freopen("a.in", "r", stdin);
    //freopen("a.out", "w", stdout);
    LL test,n,d,ar[100010],visit[100010];
    cin>>test;
    while(test--)
    {
        cin>>n>>d;
        LL sum=0,lagbe;
        int flag=0;
        rep(i,0,n)
        {
            cin>>ar[i];
            sum+=ar[i];
        }
        if(sum%n!=0)
        {
            cout<<"-1"<<endl;
            continue;
            //lagbe=sum/2+1;
        }
        else lagbe=sum/n;
        LL cnt=0,temp;

        memset(visit,0,sizeof(visit));
        //cout<<"lagbe = "<<lagbe<<endl;
        for(int i=0;i<=n-d-1;i++)
        {
            int first=ar[i];
            int second=ar[i+d];
            if(ar[i]==lagbe)
            {
                visit[i]++;
            }
            if(!(visit[i]))
            {
                if(first<second)
                {
                    if(first>lagbe) break;
                    temp=lagbe-first;
                    ar[i]=lagbe;
                    ar[i+d]-=temp;
                    if(ar[i+d]<=0) break;
                    cnt+=temp;

                }
                else
                {
                    int keep=ar[i];
                    ar[i]=ar[i+d];
                    ar[i+d]=keep;
                    first=ar[i];
                    second=ar[i+d];
                    if(first==lagbe)
                    {
                        visit[i]++;
                    }
                    else
                    {
                    if(first>lagbe) break;
                    temp=lagbe-first;
                    ar[i]=lagbe;
                    ar[i+d]-=temp;
                    if(ar[i+d]<=0) break;
                    cnt+=temp;
                    }
                }
            }

            //for(int t=0;t<n;t++) cout<<ar[t]<<" ";
            //cout<<endl;
        }
      //  cout<<"debugging"<<endl;
        //rep(i,0,n) cout<<ar[i]<<" ";
       // cout<<endl;

        for(int i=0;i<n;i++)
        {
            if(ar[i]!=lagbe)
            {
                flag=1;
                break;
            }
        }
        if(flag) cout<<"-1"<<endl;
        else cout<<cnt<<endl;


    }

}

