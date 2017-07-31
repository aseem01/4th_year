#include<bits/stdc++.h>
using namespace std;
typedef long long int LL;

LL F(LL n, LL k)
{
    LL l = k - 1, r = (1LL << n) - k - 1;
    if(l == r) return n;

    if(l < r) return F(n - 1, k);
    return F(n - 1, r + 1);
}

int main()
{
    LL n, k;
    cin >> n >> k;
    cout << F(n, k) << endl;
    return 0;
}
