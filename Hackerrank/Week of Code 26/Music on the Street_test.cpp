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
int ar[1000001];
int main()
{
    //freopen("a.in", "r", stdin);
    //freopen("a.out", "w", stdout);
    int n,total,min_h,max_h,temp,pos,sum,flag;
    while(cin>>n)
    {
        rep(i,n) cin>>ar[i];
        cin>>total>>min_h>>max_h;
        sum=0,flag=0,pos=0;
        if(n==1)
        {
            cout<<ar[pos]-min_h<<endl;
            continue;
        }
        for(int i=1; i<n; i++)
        {
            int keep=abs((abs(ar[i]))-(abs(ar[i-1])));
            if(keep>=min_h)
            {
                sum+=keep;
            }
            else
            {
                sum=0;
                pos=i+1;
            }
            //cout<<"sum = "<<sum<<endl;
            if(sum<=total)
            {
                if(sum==total)
                {
                    temp=ar[pos];
                    flag=1;
                    cout<<"temp1 = "<<temp<<endl;
                }
                else if((sum+max_h)==total)
                {
                    temp=ar[pos-1];
                    flag=1;
                    cout<<"temp2 = "<<temp<<endl;
                }
                else if((sum+min_h)==total)
                {
                    temp=ar[pos-1];
                    flag=1;
                    cout<<"temp3 = "<<temp<<endl;
                }
                else if((sum+min_h+min_h)==total)
                {
                    temp=ar[pos]-min_h;
                    flag=1;
                    cout<<"temp4 = "<<temp<<endl;
                }
                else if((sum+min_h+max_h)==total)
                {

                    int check=abs(abs(ar[pos])-abs(ar[pos-1]));
                    if(check>=min_h)
                    {
                    temp=ar[pos]-min_h;
                    flag=1;
                    cout<<"temp5 = "<<temp<<endl;
                    }
                }
                else if((sum+max_h+max_h)>=total)
                {

                    int check=abs(abs(ar[pos])-abs(ar[pos-1]));
                    if(check>=min_h)
                    {
                    temp=ar[pos]-min_h;
                    flag=1;
                    cout<<"temp6 = "<<temp<<endl;
                    }
                }
            }
            else if(sum>total)
            {
                temp=ar[pos];
                flag=1;
                cout<<"temp7 = "<<temp<<endl;
            }
            if(flag) break;
        }
        cout<<temp<<endl;
    }
    //cout<<temp<<endl;

}
