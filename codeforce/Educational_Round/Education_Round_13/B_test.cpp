#include<iostream>
#include<cmath>
using namespace std;
main()
{
    int i,j,k=0,min=100000;
    long long int n;
    cin >> n;
    int a[n],zero[n];
    for (int i=0; i<n; i++)
    {
        cin >> a[i];
        if(a[i]==0)
        {
            zero[k]=i;
            k++;
        }
    }
    int d,idx=0;
    for(int i=0; i<n; i++)
    {
        if(a[i]!=0)
        {
            for(int j=0; j<k; j++)
            {
                d = abs(i-zero[j]);
                if(d<min)
                {
                    min = d;
                    idx = j;
                }
            }
            a[i]=abs(i-zero[idx]);
            //cout <<" in "<<i<< " attempt : "<<  a[i] <<endl;
            min=100000;
        }
    }
    //cout << a;
    for(int i=0; i<n-1; i++)
    {
        cout << a[i] << " ";
    }
    cout << a[n-1] << endl;

}
