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
//int ar[12]= {0,31,28,31,30,31,30,31,31,30,31,30,31};
int main()
{
    //freopen("a.in", "r", stdin);
    //freopen("a.out", "w", stdout);
    int y1,y2,m1,m2,d1,d2;
    while(scanf("%d:%d:%d",&y1,&m1,&d1)!=EOF)
    {
        scanf("%d:%d:%d",&y2,&m2,&d2);
        if(y2<y1)
        {
            int keep=y1;
            y1=y2;
            y2=keep;

            keep=m1;
            m1=m2;
            m2=keep;

            keep=d1;
            d1=d2;
            d2=keep;

        }

        //leapy year check;
        LL cnt=0;
        //LL total=0;
        //rep(i,y1+1,y2)
        for(int i=y1+1;i<y2;i++)
        {
            if((i%400==0) || ((i%4==0) && (i%100!=0))) cnt++;
        }
        //cout<<cnt<<endl;
        LL total1=0;
        LL total2=0;
        if(m1==1) total1=d1;
        if(m1==2) total1=31+d1;
        if(m1==3) total1=59+d1;
        if(m1==4) total1=90+d1;
        if(m1==5) total1=120+d1;
        if(m1==6) total1=151+d1;
        if(m1==7) total1=181+d1;
        if(m1==8) total1=212+d1;
        if(m1==9) total1=243+d1;
        if(m1==10) total1=273+d1;
        if(m1==11) total1=304+d1;
        if(m1==12) total1=334+d1;






        //

        if(m2==1) total2=d2;
        if(m2==2) total2=31+d2;
        if(m2==3) total2=59+d2;
        if(m2==4) total2=90+d2;
        if(m2==5) total2=120+d2;
        if(m2==6) total2=151+d2;
        if(m2==7) total2=181+d2;
        if(m2==8) total2=212+d2;
        if(m2==9) total2=243+d2;
        if(m2==10) total2=273+d2;
        if(m2==11) total2=304+d2;
        if(m2==12) total2=334+d2;


        int t1=0,t2=0;

        if((y1%400==0) || ((y1%4==0) && (y1%100!=0))) t1=1;
        if((y2%400==0) || ((y2%4==0) && (y2%100!=0))) t2=1;
        LL res;
        if(y1==y2) res=0;
        else res=y2-y1-1;
        LL ans=(res-cnt);
        int days1;
        if(y1==y2) days1=total1;
        else  days1=(365-total1)+1;
        //if(total2!=365) total2+=1;
        int days2=total2;
        //cout<<"before days2 = "<<days2<<endl;
        if(t1)
        {
            if(y1!=y2)
            {
            if((m1==1) || ((m1==2) && (d1!=29))) days1+=t1;
            }
        }

        if(t2)
        {
            if(y1!=y2)
            {
            if((m2>2)) days2+=t2;
            }

        }

        //int days2=(365-total2);

        cout<<"total1 = "<<total1<<endl;
        cout<<"total2 = "<<total2<<endl;
        cout<<"days1 = "<<days1<<endl;
        cout<<"days2 = "<<days2<<endl;

       cout<<"ans = "<<ans<<endl;
       if(y1 ==y2) cout<<abs(days1-days2)<<endl;
       else
       {
        LL temp=ans*365+cnt*366+days1+days2-1;
        cout<<temp<<endl;
       }

    }

}
