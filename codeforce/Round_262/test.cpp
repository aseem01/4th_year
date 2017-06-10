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
LL hash1[200001],hash2[200001],ar[200001];
int main()
{
    //freopen("a.in", "r", stdin);
    //freopen("a.out", "w", stdout);
    int n,query,p,q;
    while(cin>>n)
    {
        memset(hash1,0,sizeof(hash1));
        memset(hash2,0,sizeof(hash2));
        rep(i,0,n)
        {
            cin>>ar[i];
            hash1[ar[i]]++;
            hash2[ar[i]]++;
        }
        sort(ar,ar+n);
        cin>>query;
        rep(i,0,query)
        {
            int cnt=0;
            cin>>p>>q;
            if(p>q)
            {
                int keep=p;
                p=q;
                q=keep;
            }

            //here,if divisible array element both query then count one not two;
            //like this arr[3, 6, 9] and query 3 9. here,3,6 divisible  by query 3 for that count two
            // left 9 ,it's divisible both query here count one. Total 2+1=3(ans)

            //hash1[3]=1,hash1[6]=1,hash1[9]=1;
            //hash2[3]=1,hash2[6]=1,hash2[9]=1;

            for(int j=p;j<=ar[n-1];j+=p)
            {
                    cnt+=hash1[j];
                    if(j%q==0)
                    {
                        hash2[j]=0;//when j=9,j%9==0 condition true,hash2[9]=0 now,but previous hash2[9]=1;
                    }
            }

            for(int j=q;j<=ar[n-1];j+=q)
            {

                    cnt+=hash2[j];
                    hash2[j]=hash1[j];//hash2[9]=0 update hash2[9]=hash1[9],here hash1[9]=1;if you don't update it's
                    // not problem first query but 2nd,3rd.....ctc query we get unexpected result; because hash2[j]=0 first query
                    // you don't update 2nd,3rd..etc query. Like ar[2,3,6,8,9]
                                                              //query: 3 9
                                                              //query: 2 9
                                                              //first hash1[3]=1,hash1[6]=1,hash1[9]=1;
                                                                    //hash2[3]=1,hash2[6]=1,hash2[9]=1;
                                                                    //first query result: 3;
                                                                    //second query result:4; but we get 3.
                                                                    //because you do't update hash2[9]=1;

            }

            cout<<cnt<<endl;
        }
    }

}

