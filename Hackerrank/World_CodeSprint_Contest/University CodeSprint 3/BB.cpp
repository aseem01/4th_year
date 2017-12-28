#include <bits/stdc++.h>
using namespace std;

int a[600][600];

int n,m;

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    cin>>n>>m;
    for(int i = 0, x, y, w  ; i < m ; i ++ ) {
        cin>>x>>y>>w;
        for(int j = 0 ; j < n ; j ++ )
            for(int k = 0 ; k < n; k ++)
                a[j][k] += max(0, w - max(abs(j-x), abs(k-y)) );
    }

    cout<<"hello coder"<<endl;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;



    int ans = 0 ;
    for(int i = 0 ; i < n ;i  ++ )
        for(int j = 0 ; j  < n ; j ++ )
            ans = max(ans, a[i][j]);
    cout<<ans<<endl;
    return 0;
}
