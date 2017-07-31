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
struct node
{
    string name;
    int region,rating;
    node(string name,int region,int rating):name(name),region(region),rating(rating){}
};
int main()
{
    //freopen("a.in", "r", stdin);
    //freopen("a.out", "w", stdout);

    int n,m;
    while(cin>>n>>m)
    {
        vector<node>v;
        string nam;
        int town,point;
        getchar();
        rep(i,0,n)
        {
            cin>>nam>>town>>point;
            //cout<<"nam = "<<nam<<" town = "<<town<<" point = "<<point<<endl;
            v.push_back(node(nam,town,point));
        }
        sort(v.begin(),v.end(),[](node as,node ass)
             {
                if(as.region==ass.region) return as.rating>ass.rating;
                else  return as.region<ass.region;

             });

             //cout<<"After sorting"<<endl;
             //rep(i,0,v.size()) cout<<v[i].name<<" "<<v[i].region<<" "<<v[i].rating<<endl;
             int cnt=1;
             int count=0;
             int i;
             for(i=0;i<v.size();i++)
             {
                // cout<<v[i].name<<" "<<v[i].region<<" "<<v[i].rating<<endl;
                if(v[i].region==cnt)
                {
                    count++;
                }
                else
                {
                    //cout<<"i = "<<i<<" count = "<<count<<endl;
                    if(count==2) cout<<v[i-count].name<<" "<<v[i-count+1].name<<endl;
                    else if(count>=3)
                    {
                        if((v[i-count].rating!=v[i-count+1].rating)&&(v[i-count+1].rating!=v[i-count+2].rating))
                        {
                           cout<<v[i-count].name<<" "<<v[i-count+1].name<<endl;
                        }
                        else if((v[i-count].rating==v[i-count+1].rating )&&(v[i-count+1].rating!=v[i-count+2].rating))
                        {
                            cout<<v[i-count].name<<" "<<v[i-count+1].name<<endl;
                        }
                        else cout<<"?"<<endl;
                    }
                    cnt++;
                    count=1;
                }
             }
             //cout<<"count = "<<count<<endl;
             if(count!=0)
             {
                  if(count==2) cout<<v[i-count].name<<" "<<v[i-count+1].name<<endl;
                    else if(count>=3)
                    {
                        if((v[i-count].rating!=v[i-count+1].rating)&&(v[i-count+1].rating!=v[i-count+2].rating))
                        {
                           cout<<v[i-count].name<<" "<<v[i-count+1].name<<endl;
                        }
                        else if((v[i-count].rating==v[i-count+1].rating )&&(v[i-count+1].rating!=v[i-count+2].rating))
                        {
                            cout<<v[i-count].name<<" "<<v[i-count+1].name<<endl;
                        }
                        else cout<<"?"<<endl;
                    }
             }
    }

}

