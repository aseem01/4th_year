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
int first,last,n,mid;
vector<int>v;
int BS(int ranking)
{
    first=0;
    last=v.size();
    while(first<=last)
    {
        mid=(first+last)/2;
        if(ranking>v[mid] && ranking<v[mid-1] && mid!=0)
        {
            return mid+1;
        }
        else if(ranking==v[mid])
        {
            return mid+1;
        }
        else if(mid==(v.size()-1) && ranking<v[v.size()-1])
        {
            return v.size()+1;

        }
        else if(mid == (v.size()-1) && (ranking==v[v.size()-1]))
        {
            return v.size();
        }
        else if(mid==0 && ranking>=v[0])
        {
             return 1;
        }
        else if(ranking>v[mid])
        {
            last=mid-1;
        }
        else
        {
            first=mid+1;
        }
    }
}
int main()
{
    //freopen("a.in", "r", stdin);
    //freopen("a.out", "w", stdout);
    int query,ranking,value;
    while(cin>>n)
    {
        for(int i=0; i<n; i++)
        {
            cin>>value;
            v.push_back(value);
        }
        sort(v.begin(),v.end());
        uniq(v);
        reverse(v.begin(),v.end());
        cin>>query;
        for(int i=1; i<=query; i++)
        {
            cin>>ranking;
            cout<<BS(ranking)<<endl;
        }
    }
}
