#include<bits/stdc++.h>
using namespace std;
#define FR0(i,N) for(i=0;i<(N);i++)
#define FR1(i,N) for(i=1;i<=(N);i++)
#define FRN(i,k,N) for(i=k;i<(N);i++)
#define pf printf
#define db double
#define PI acos(-1.0)
#define LL long long
#define MX 1000005
#define MOD 1000000007
typedef long long int ll;
int main()
{
    string s1,s2;
    while(getline(cin,s1))
    {
        getline(cin,s2);
        int len1=s1.length();
        int len2=s2.length();
        int boro;
        if(len1>len2) boro=len1;
        else boro=len2;
         if(s1!=s2) cout<<boro<<endl;
         else cout<<"-1"<<endl;
    }
}
