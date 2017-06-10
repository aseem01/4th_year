#include <bits/stdc++.h>
using namespace std;
#define maxn 100001
long long numbers[maxn];
long long primes[maxn];
long long end_mark;
void seieve()
{
    long long d = 0;
    long long lim = sqrt(maxn*.1)+2;
    primes[d++] = 2;
    for(long long i=3; i<=maxn; i=i+2)
    {
        if(!numbers[i])
        {
            primes[d++] = i;
            if(i<=lim)
            {
                for(long long j = i*i; j<=maxn; j += (i*2))numbers[j]=1;
            }

        }
    }
}
void prime_fact(long long n,long long per[])
{
    long long lim = sqrt(n);
    long long i = 0;
    while(primes[i]<=lim)
    {
        if(n%primes[i]==0)
        {
            while(n%primes[i]==0)
            {
                per[primes[i]]++;
                n=n/primes[i];
            }
        }
        end_mark = primes[i];
        i++;
    }
    if(n!=1)
    {
        end_mark = n;
        per[n]++;
    }
}
void factovise(long long n,long long ser[])
{
    for(long long i=n; i>=2; i--)
    {
        prime_fact(i,ser);
    }
}
int main()
{
    seieve();
    long long m,n;
    while(cin >> m >> n)
    {
        long long per[maxn];
        long long ser[maxn];
        memset(per,0,sizeof(per));
        memset(ser,0,sizeof(ser));
        cout<<"h1"<<endl;
        prime_fact(n,per);
        long long khek = end_mark;
        cout<<"h2"<<endl;
        factovise(m,ser);
        cout<<"h3"<<endl;
        long long i = 0;
        long long flag = 0;
        while(primes[i]<=khek)
        {
            //cout << per[primes[i]] << " " << ser[primes[i]] << endl;
            cout<<"passed"<<endl;

            if(per[primes[i]] > ser[primes[i]] && per[primes[i]]!=0)
            {
                flag = -1;
                break;
            }
            i++;
        }
        if(flag == 0)
        {
            cout << n << " divides " << m << "!\n";
        }
        else
        {
            cout << n << " does not divide " << m <<"!\n";
        }

    }



    return 0;
}
