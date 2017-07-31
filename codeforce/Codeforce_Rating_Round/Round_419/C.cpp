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
int ar[101][101];
int main()
{
    //freopen("a.in", "r", stdin);
    //freopen("a.out", "w", stdout);
    int row,col;
    while(cin>>row>>col)
    {
        vector<pair<string,int> > v;
        int minimum,flag;



        for(int i=0;i<row;i++)
        {
            for(int j=0;j<col;j++)
            {
                cin>>ar[i][j];
            }
        }



        if(row<col)
        {
            for(int i=0; i<row; i++)
            {
                minimum=INT_MAX;
                flag=0;
                for(int j=0; j<col; j++)
                {
                    //cin>>ar[i][j];
                    //br[i][j]=ar[i][j];
                    if(ar[i][j]==0) flag=1;
                    minimum=min(minimum,ar[i][j]);
                }
                //cout<<"flag = "<<flag<<endl;
                // cout<<"minimum = "<<minimum<<endl;
                if(!flag)
                {
                    for(int k=0; k<minimum; k++)
                    {
                        for(int L=0; L<col; L++)
                        {
                            ar[i][L]=ar[i][L]-1;
                        }
                        v.push_back(make_pair("row",i+1));
                    }
                }
            }
            //cout<<"I'm here"<<endl;




            for(int i=0; i<col; i++)
            {
                flag=0;
                minimum=INT_MAX;
                for(int j=0; j<row; j++)
                {
                    if(ar[j][i]==0) flag=1;
                    minimum=min(minimum,ar[j][i]);
                }

                // cout<<"minimum = "<<minimum<<endl;
                //cout<<"flag = "<<flag<<endl;

                if(!flag)
                {
                    for(int k=0; k<minimum; k++)
                    {
                        for(int L=0; L<row; L++)
                        {
                            ar[L][i]=ar[L][i]-1;
                        }
                        v.push_back(make_pair("col",i+1));
                    }
                }


            }

            int flag1=0;

            for(int i=0; i<row; i++)
            {
                for(int j=0; j<col; j++)
                {
                    if(ar[i][j]!=0)
                    {
                        flag1=1;
                        break;
                    }
                }
            }


            //cout<<"v.size() = "<<v.size()<<endl;


            //coloum checking

            /*for(int i=0;i<row;i++)
            {
                for(int j=0;j<col;j++)
                {
                    cout<<br[i][j]<<" ";
                }
                cout<<endl;
            }
            cout<<endl;*/

            if(flag1) cout<<"-1"<<endl;
            else
            {
                cout<<v.size()<<endl;
                for(int i=0; i<v.size(); i++) cout<<v[i].first<<" "<<v[i].second<<endl;
            }

        }
        else
        {
            //cout<<"row boro coloum chuto"<<endl;
            for(int i=0; i<col; i++)
            {
                minimum=INT_MAX;
                flag=0;
                for(int j=0; j<row; j++)
                {
                    //cin>>ar[i][j];
                    //br[i][j]=ar[i][j];
                    if(ar[j][i]==0) flag=1;
                    minimum=min(minimum,ar[j][i]);
                }
                //cout<<"flag = "<<flag<<endl;
                // cout<<"minimum = "<<minimum<<endl;
                if(!flag)
                {
                    for(int k=0; k<minimum; k++)
                    {
                        for(int L=0; L<row; L++)
                        {
                            ar[L][i]=ar[L][i]-1;
                        }
                        v.push_back(make_pair("col",i+1));
                    }
                }
            }
            //cout<<"I'm here"<<endl;
            //cout<<"v.size() = "<<v.size()<<endl;

         /*for(int i=0;i<row;i++)
         {
             for(int j=0;j<col;j++)
             {
                 cout<<ar[i][j]<<" ";
             }
             cout<<endl;
         }
         cout<<endl;
         */

            for(int i=0; i<row; i++)
            {
                flag=0;
                minimum=INT_MAX;
                for(int j=0; j<col; j++)
                {
                    if(ar[i][j]==0) flag=1;
                    minimum=min(minimum,ar[i][j]);
                }

                 //cout<<"minimum = "<<minimum<<endl;
                //cout<<"flag = "<<flag<<endl;

                if(!flag)
                {
                    for(int k=0; k<minimum; k++)
                    {
                        for(int L=0; L<row; L++)
                        {
                            ar[i][L]=ar[i][L]-1;
                        }
                        v.push_back(make_pair("row",i+1));
                    }
                }


            }

            int flag1=0;

            for(int i=0; i<row; i++)
            {
                for(int j=0; j<col; j++)
                {
                    if(ar[i][j]!=0)
                    {
                        flag1=1;
                        break;
                    }
                }
            }


            //cout<<"v.size() = "<<v.size()<<endl;


            //coloum checking

            /*for(int i=0;i<row;i++)
            {
                for(int j=0;j<col;j++)
                {
                    cout<<br[i][j]<<" ";
                }
                cout<<endl;
            }
            cout<<endl;*/

            if(flag1) cout<<"-1"<<endl;
            else
            {
                cout<<v.size()<<endl;
                for(int i=0; i<v.size(); i++) cout<<v[i].first<<" "<<v[i].second<<endl;
            }
        }

    }

}
