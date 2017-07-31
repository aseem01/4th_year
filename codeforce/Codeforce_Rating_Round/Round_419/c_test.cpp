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
    int matrix[101][101],row,col;
    while(cin>>row>>col)
    {
        vector<pair<string,int> >v;
        rep(i,0,row)
        {
            rep(j,0,col) cin>>matrix[i][j];
        }
        int flag;
        int minimum;
        if(row<col)
        {
            rep(i,0,row)
            {
                flag=0;
                minimum=INT_MAX;
                rep(j,0,col)
                {
                    if(matrix[i][j]==0)
                    {
                        flag=1;
                        break;
                    }
                    minimum=min(minimum,matrix[i][j]);
                }

                if(!flag)
                {
                    rep(j,0,minimum)
                    {
                        rep(k,0,col)
                        {
                            matrix[i][k]=matrix[i][k]-1;
                        }
                        v.push_back(make_pair("row",i+1));
                    }
                }
            }

            //coloum checking;
            rep(i,0,col)
            {
                flag=0;
                minimum=INT_MAX;
                rep(j,0,row)
                {
                    if(matrix[j][i]==0)
                    {
                        flag=1;
                        break;
                    }
                    minimum=min(minimum,matrix[j][i]);

                }
                if(!flag)
                {
                    rep(j,0,minimum)
                    {
                        rep(k,0,row)
                        {
                            matrix[k][i]=matrix[k][i]-1;
                        }
                        v.push_back(make_pair("col",i+1));
                    }
                }
            }

            //checking

           /* rep(i,0,row)
            {
                rep(j,0,col) cout<<matrix[i][j]<<" ";
                cout<<endl;
            }*/



            flag=0;
            rep(i,0,row)
            {
                rep(j,0,col)
                {
                    if(matrix[i][j]!=0)
                    {
                        flag=1;
                        break;
                    }
                }
            }
            if(flag) cout<<"-1"<<endl;
            else
            {
                cout<<v.size()<<endl;
                rep(i,0,v.size()) cout<<v[i].first<<" "<<v[i].second<<endl;
            }



        }
        else
        {
            rep(i,0,col)
            {
                flag=0;
                minimum=INT_MAX;
                rep(j,0,row)
                {
                    if(matrix[j][i]==0)
                    {
                        flag=1;
                        break;
                    }
                    minimum=min(minimum,matrix[j][i]);
                }
                //cout<<"minimum = "<<minimum<<endl;
                if(!flag)
                {
                    rep(j,0,minimum)
                    {
                        rep(k,0,row)
                        {
                            matrix[k][i]=matrix[k][i]-1;
                        }
                        v.push_back(make_pair("col",i+1));
                    }
                }
            }



            //row checking;
            rep(i,0,row)
            {
                flag=0;
                minimum=INT_MAX;
                rep(j,0,col)
                {
                    if(matrix[i][j]==0)
                    {
                        flag=1;
                        break;
                    }
                    minimum=min(minimum,matrix[i][j]);
                }



                if(!flag)
                {
                    rep(j,0,minimum)
                    {
                        rep(k,0,col)
                        {
                            matrix[i][k]=matrix[i][k]-1;
                        }
                        v.push_back(make_pair("row",i+1));
                    }
                }
            }
            //Debugging;

            /*rep(i,0,row)
            {
                rep(j,0,col) cout<<matrix[i][j]<<" ";
                cout<<endl;
            }*/

            flag=0;
            rep(i,0,row)
            {
                rep(j,0,col)
                {
                    if(matrix[i][j]!=0) flag=1;
                }
            }
            if(flag) cout<<"-1"<<endl;
            else
            {
                cout<<v.size()<<endl;
                rep(i,0,v.size()) cout<<v[i].first<<" "<<v[i].second<<endl;
            }

        }


    }

}

