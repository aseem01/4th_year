//----->|try=0; while(!success) try++;|<------
//----->|Belief Yourself,Respect Yourself|<----
//----->|Be Proud Of Yourself,You're Doing Your best|<-----
#include<bits/stdc++.h>
using namespace std;
#define uniq(x)  x.erase(unique(x.begin(),x.end()), x.end()) //Unique value find from vector
#define max3(a,b,c) max(max(a,b),c)
#define min3(a,b,c) min(min(a,b),c)
#define PI acos(-1.0)
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


int main()
{
    //freopen("a.in", "r", stdin);
    //freopen("a.out", "w", stdout);
    LL number,arr[100001],query,taka,ans;
    while(cin>>number)
    {
        vector<int>v;
        for(int i=0; i<number; i++)
        {
            cin>>arr[i];
            v.push_back(arr[i]);
        }
        //sort(arr,arr+number);
        sort(v.begin(),v.end());
        uniq(v);
        cin>>query;
        for(int i=0; i<query; i++)
        {
            cin>>taka;
            ans=upper_bound(v,v+v.size(),taka)-v;
            cout<<ans<<endl;

        }
    }
}

