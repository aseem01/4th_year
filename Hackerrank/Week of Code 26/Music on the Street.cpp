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
#define rep(i, n) for(int i = 0; i < n; ++i)
#define REP(i, n) for(int i = 1; i <= n; ++i)
#define rep1(i,start,n) for(int i=start;i<n;++i)
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
LL ar[1000010],br[1000010];
int main()
{
    //freopen("a.in", "r", stdin);
    //freopen("a.out", "w", stdout);
    LL n,total,max_h,min_h,sum;
    while(cin>>n)
    {
        rep(i,n)
        {
            cin>>ar[i];
            br[i]=ar[i];
        }
        //int test;
        cin>>total>>min_h>>max_h;
        sum=0;
        LL temp;
        int flag=0;
        if(n==1)
        {
            temp=ar[0]-max_h;
            cout<<temp<<endl;
            continue;
        }
        //cout<<"temp = "<<temp<<endl;
        for(int i=1; i<n; i++)
        {
            LL keep=(abs(ar[i])-abs(ar[i-1]));
            if(max_h>=total)
            {
                temp=ar[0]-total;
                continue;
            }

            if(keep>=min_h && keep<=max_h)
            {
                sum+=keep;
            }
            else sum=0;
            if(sum==total)
            {
                temp=br[i]-sum;
                flag=1;
            }
            else if(((br[i]-sum)==br[0]) && (i==(n-1)))
            {
                LL res=sum+max_h+max_h;
                if((res>=total) && ((sum+min_h)<=total))
                {
                    temp=br[0]-max_h;
                    flag=1;
                }
            }
            else if(((br[i]-sum)==br[0]) && (i!=(n-1)))
            {
                LL res=sum+max_h;
                if((res>=total) && ((sum+min_h)<=total))
                {
                    temp=br[0]-(total-sum);
                    flag=1;
                }
            }
            else if((i==(n-1)) && ((br[i]-sum)!=br[0]))
            {
                LL res=sum+max_h;
                if((res>=total) && ((sum+min_h)<=total))
                {
                    temp=br[i]-sum;
                    flag=1;

                }
            }
            if(flag) break;
            //cout<<"temp5 = "<<temp<<endl;
        }
        cout<<temp<<endl;
    }

}
