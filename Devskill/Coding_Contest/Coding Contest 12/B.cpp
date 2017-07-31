#include <map>
#include <iostream>
using namespace std;

#define long long long
const long M = 10; // modulo
map<long, long> F;

long f(long n)
{
    //F.clear();
    if (F.count(n)) return F[n];
    long k=n/2;
    if (n%2==0)
    {
        return F[n] = (f(k)*f(k) + f(k-1)*f(k-1)) % M;
    }
    else
    {
        return F[n] = (f(k)*f(k+1) + f(k-1)*f(k)) % M;
    }
}

int main()
{
    long n;

    long t=1,test;
    cin>>test;
    while (test--)
    {
        F[0]=F[1]=1;
        cin>>n;
        cout <<"Case "<<t++<<": "<< (n==0 ? 0 : f(n-1)%10) <<" is the last digit."<<endl;

    }
}

