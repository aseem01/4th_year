#include <bits/stdc++.h>
using namespace std;

int main ()
{
    ios::sync_with_stdio(false);
    int n, k;
    cin>>n>>k;

    int lo=1000, hi=1;
    for (int i=0; i<k; i++)
    {
        int x, y;
        cin>>x>>y;

        if (y>1) lo=min(lo, (x-1)/(y-1));
        hi=max(hi, (x-1)/y+1);

       // if (y>1)cout<<(x-1)/(y-1)<<' ';
        //cout<<(x-1)/y+1<<endl;
    }
  cout<<"hi = "<<hi<<" lo = "<<lo<<endl;
    //assert(lo>=hi);


    set<int> pos;
    for (int i=hi; i<=lo; i++)
    {
        int cur=(n-1)/i+1;
        pos.insert(cur);
    }

    if (pos.size()>1)   cout<<-1;
    else                cout<<*pos.begin();
}
