#include<bits/stdc++.h>
using namespace std;
#define max3(a,b,c) max(max(a,b),c)
#define uniq(x)  x.erase(unique(x.begin(),x.end()), x.end()) //Unique value find from vector
#define min3(a,b,c) min(min(a,b),c)
#define PI acos(-1.0)
#define LL long long
#define INF_MAX 2147483647
#define INF_MIN -2147483647
#define MX 10000410
#define MOD 1000000007
LL isprime[MX];
LL ar[MX];
LL br[MX];
vector<LL>prime,v;
int primefactorcnt[MX];
void siv()
{
    memset(isprime,1,sizeof(isprime));
    for(int i=2; i<MX; i++)
    {
        if(isprime[i])
        {
            for(int j=2; i*j<MX; j++)
            {
                isprime[i*j]=0;
            }

        }
    }
    for(int i=2,t=0; i<=MX; i++)
    {
        if(isprime[i])
        {
            prime.push_back(i);
            br[i]=t;
            t++;
        }
    }
}

void primeFactorize(LL n )
{

    LL sqrtN = sqrt(n);
    //cout<<"sqrtN = "<<sqrtN<<endl;
    for( LL i = 0; prime[i] <= sqrtN; i++ )
    {
        if( n % prime[i] == 0 )
        {

            while( n % prime[i] == 0 )
            {
                n /= prime[i];
                v.push_back(prime[i]);
            }
        }
    }
    if( n > 1 )
    {
        v.push_back(n);
    }
}
int main()
{
    siv();
    LL test,n;
    cin>>test;
    while(test--)
    {
        cin>>n;
        if(n==1)
        {
            cout<<"No"<<endl;
            continue;
        }
        primeFactorize( n );
        //sort(v.begin(),v.end());
        uniq(v);
        int keep=br[v[0]];
        int flag=0;
        /*for(int i=0;i<v.size();i++)
        {
            cout<<v[i]<<" ";
        }
        cout<<endl;*/
        for(int i=0; i<v.size(); i++)
        {
            if(v[i]!=prime[keep])
            {
                flag=1;
                break;
            }
            keep++;
        }
        if(!flag) cout<<"Yes"<<endl;
        else  cout<<"No"<<endl;
        v.clear();

    }
}
