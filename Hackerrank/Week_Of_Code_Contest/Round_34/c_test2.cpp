#include<bits/stdc++.h>
using namespace std;

// Prints all subarrays in arr[0..n-1]
void subArray(int ar[], int n)
{

    for (int i=0; i <n; i++)
    {
        for (int j=i; j<n; j++)
        {
            for (int k=i; k<=j; k++)
                cout << ar[k] << " ";

            cout << endl;
        }
    }
}

// Driver program
int main()
{
    int n,ar[100010],query;
    while(cin>>n>>query)
    {
        for(int i=0; i<n; i++) cin>>ar[i];
        //int n = sizeof(ar)/sizeof(ar[0]);
        //cout << "All Non-empty Subarrays\n";
        //subArray(ar, n);
        int x,y;
        //cin>>query;
        for(int i=0; i<query; i++)
        {
            cin>>x>>y;
            int cnt=0;
            for (int i=0; i <n; i++)
            {
                for (int j=i; j<n; j++)
                {
                    int xx=0;
                    int yy=0;
                    for (int k=i; k<=j; k++)
                    {
                        if(ar[k]==x) xx++;
                        if(ar[k]==y) yy++;
                    }
                    if(xx==yy) cnt++;
                    //cout << ar[k] << " ";

                    //cout << endl;
                }
            }
            cout<<cnt<<endl;
        }
    }
}
