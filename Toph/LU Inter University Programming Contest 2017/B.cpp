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
long long gcd(long long a, long long b)
{
    while (b != 0)
    {
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
    int r1,c1,r2,c2,ar[101][101];
    while(cin>>r1>>c1>>r2>>c2)
    {

        rep(i,1,9)
        {
            rep(j,1,9) ar[i][j]=0;
        }

        if(r1==r2 && c1==c2)
        {
            cout<<"-1"<<endl;
            continue;
        }
        int flag=0;
        for(int i=1; i<=8; i++)
        {
            for(int j=1; j<=8; j++)
            {

                if(i==r1 && j==c1) flag=1;
                if(flag)
                {
                    //up left;
                    int t1=i,t2=j;
                   // cout<<"t1 = "<<t1<<" t2 = "<<t2<<endl;
                    while(t1>0 && t2>0)
                    {
                        ar[t1][t2]=1;
                        t1--;
                        t2--;

                    }


                    //up right;
                    t1=i,t2=j;
                    while(t1>0 && t2<=8)
                    {
                        ar[t1][t2]=1;
                        t1--;
                        t2++;
                    }


                    //down left checking;
                    t1=i,t2=j;
                    while(t1<=8 && t2>0)
                    {
                        ar[t1][t2]=1;
                        t1++;
                        t2--;

                    }


                    //down left checking;
                    t1=i,t2=j;
                    while(t1<=8 && t2<=8)
                    {
                        ar[t1][t2]=1;
                        t1++;
                        t2++;
                    }
                    break;

                }

            }
            if(flag) break;
        }





        flag=0;
        int cnt=0;
        for(int i=1; i<=8; i++)
        {
            for(int j=1; j<=8; j++)
            {

                if(i==r2 && j==c2) flag=1;
                if(flag)
                {
                    int one=0;
                    int two=0;
                    //up left;
                    int t1=i,t2=j;
                    //cout<<"t1 = "<<t1<<" t2 = "<<t2<<endl;
                    int test=0;
                    while(t1>0 && t2>0)
                    {
                        //ar[t1][t2]=1;
                        t1--;
                        t2--;
                        if(ar[t1][t2]==1)
                        {
                            if(r1==r2 || c1==c2) cnt+=2;
                            else cnt++;
                            test=1;
                            one=1;
                        }
                        if(test) break;


                    }
                    //cout<<"first = "<<cnt<<endl;


                    //up right;
                    test=0;
                    t1=i,t2=j;
                    while(t1>0 && t2<=8)
                    {
                        //ar[t1][t2]=1;
                        t1--;
                        t2++;
                        if(ar[t1][t2]==1)
                        {
                            if(r1==r2 || c1==c2) cnt+=2;
                            else cnt++;
                            two=0;
                            test=1;
                        }
                        if(test) break;
                    }
                   // cout<<"second = "<<cnt<<endl;

                    //down left checking;
                    t1=i,t2=j;
                    test=0;
                    while(t1<=8 && t2>0)
                    {
                        //ar[t1][t2]=1;
                        t1++;
                        t2--;
                        if(ar[t1][t2]==1)
                        {
                            if(two==0)
                            {
                                if(r1==r2 || c1==c2) cnt+=2;
                                else cnt++;
                            }
                            test=1;
                        }
                        if(test) break;

                    }
                   // cout<<"third = "<<cnt<<endl;


                    //down right checking;
                    t1=i,t2=j;
                    test=0;
                    //cout<<"t1 = "<<t1<<" t2 = "<<t2<<" cnt = "<<cnt<<endl;
                    while(t1<=8 && t2<=8)
                    {
                        //ar[t1][t2]=1;
                        t1++;
                        t2++;
                        if(ar[t1][t2]==1)
                        {
                            if(one==0)
                            {
                                if(r1==r2 || c1==c2) cnt+=2;
                                else cnt++;
                            }
                            test=1;
                        }
                        if(test) break;
                    }
                    break;

                }

            }
            if(flag) break;
        }































        /*cout<<"I'm here"<<endl;
        rep(i,1,9)
        {
            rep(j,1,9)
            {
                cout<<ar[i][j]<<" ";
            }
            cout<<endl;
        }
        cout<<endl;



        int row1=r1,col1=c1;

        int rowUR=r2,colUR=c2;
        int rowUL=r2,colUL=c2;

        int rowDL=r2,colDL=c2;
        int rowDR=r2,colDR=c2;

        int cnt=0;
        //up right digonal check;
        while(row1>0 && col1<=8)
        {
            row1--;
            col1++;
            //up right;
            rowUR--;
            colUR++;
            if(row1==rowUR && col1==colUR) cnt++;

            //up left;
            rowUL--;
            colUL--;
            if(row1==rowUL && col1==colUL) cnt++;

            //Down right;
            rowDR++;
            colDR++;
            if(row1==rowDR && col1==colDR) cnt++;

            //Down left;
            rowDL++;
            colDL--;
            if(row1==rowDL && col1==colDL) cnt++;
        }



        /* //up left digonal check;
        row1=r1,col1=c1;

        rowUR=r2,colUR=c2;
        rowUL=r2,colUL=c2;

        rowDL=r2,colDL=c2;
        rowDR=r2,colDR=c2;
        while(row1>=0 && col1>=0)
        {
            row1--;
            col1--;
            //up right;
            rowUR--;
            colUR++;
            if(row1==rowUR && col1==colUR) cnt++;

            //up left;
            rowUL--;
            colUL--;
            if(row1==rowUL && col1==colUL) cnt++;

            //Down right;
            rowDR++;
            colDR++;
            if(row1==rowDR && col1==colDR) cnt++;

            //Down left;
            rowDL++;
            colDL--;
            if(row1==rowDL && col1==colDL) cnt++;
        }






        //Down Right checking;
        row1=r1,col1=c1;

        rowUR=r2,colUR=c2;
        rowUL=r2,colUL=c2;

        rowDL=r2,colDL=c2;
        rowDR=r2,colDR=c2;
        /*cout<<"row1 = "<<row1<<" col1 = "<<col1<<" cnt = "<<cnt<<endl;
        cout<<"rowUR = "<<rowUR<<" colUR = "<<colUR<<endl;
        cout<<"rowUL = "<<rowUL<<" colUL = "<<colUL<<endl;

        cout<<"rowDR = "<<rowDR<<" colDR = "<<colDR<<endl;
        cout<<"rowDL = "<<rowDL<<" colDL = "<<colDL<<endl;
        while(row1<=8 && col1<=8)
        {
            row1++;
            col1++;
            ar[row1][col1]=1;
            //up right;
            rowUR--;
            colUR++;
            //br[rowUR][colUR]=1;
            if(ar[rowUR][colUR]==1) cnt++;

            //if(row1==rowUR && col1==colUR) cnt++;

            //up left;

            rowUL--;
            colUL--;
            //cout<<"row1 = "<<row1<<" col1 = "<<col1<<" cnt = "<<cnt<<endl;
            //cout<<"rowUL = "<<rowUL<<" colUL = "<<colUL<<endl;
            if(row1==rowUL && col1==colUL) cnt++;

            //Down right;
            rowDR++;
            colDR++;
            if(row1==rowDR && col1==colDR) cnt++;

            //Down left;
            rowDL++;
            colDL--;
            if(row1==rowDL && col1==colDL) cnt++;
        }
        cout<<"ending down right cnt = "<<cnt<<endl;



        //Down left checking;
        row1=r1,col1=c1;

        rowUR=r2,colUR=c2;
        rowUL=r2,colUL=c2;

        rowDL=r2,colDL=c2;
        rowDR=r2,colDR=c2;

        while(row1<=8 && col1>=0)
        {
            row1++;
            col1--;
            //up right;
            rowUR--;
            colUR++;
            if(row1==rowUR && col1==colUR) cnt++;

            //up left;
            rowUL--;
            colUL--;
            if(row1==rowUL && col1==colUL) cnt++;

            //Down right;
            rowDR++;
            colDR++;
            if(row1==rowDR && col1==colDR) cnt++;

            //Down left;
            rowDL++;
            colDL--;
            if(row1==rowDL && col1==colDL) cnt++;
        }*/

        if(cnt<=0) cout<<"-1"<<endl;
        else cout<<cnt<<endl;


    }

}

