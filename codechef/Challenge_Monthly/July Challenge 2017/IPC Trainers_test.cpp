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
    int test,n,days;
    cin>>test;
    while(test--)
    {
        cin>>n>>days;
        vector<int>sadness(n),lectures(n),startdays(n);
        rep(i,0,n)
        {
            cin>>startdays[i]>>lectures[i]>>sadness[i];
            startdays[i]--;
        }


        vector<pair<int,int> >persons;
        rep(i,0,n) persons.push_back(make_pair(sadness[i],i));
        sort(persons.begin(),persons.end());

        cout<<"Sorting check"<<endl;
        rep(i,0,persons.size()) cout<<persons[i].first<<" "<<persons[i].second<<endl;



        vector<int>lecturesTaken(n);
        int cur_day=0;
        set<int>dayset;
        rep(i,0,n) dayset.insert(i);
        //for(auto it : dayset)cout<<it<<" ";
        //cout<<endl;

        rep(i,0,persons.size())
        {
            int lec=lectures[persons[i].second];
            cout<<"lec = "<<lec<<endl;
            rep(j,0,lec)
            {
                auto iter=dayset.lower_bound(startdays[persons[i].second]);
                cout<<"iter = "<<*iter<<endl;
                if(iter==dayset.end()) break;
                else
                {
                   lecturesTaken[persons[i].second]++;
                   dayset.erase(iter);
                }
            }
        }


        LL ans=0;
        rep(i,0,n) ans+=(lectures[i]-lecturesTaken[i])*sadness[i];
        cout<<ans<<endl;






    }


}
