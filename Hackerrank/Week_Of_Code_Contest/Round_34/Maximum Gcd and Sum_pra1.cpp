#include<bits/stdc++.h>
using namespace std;
const int MX = 1e6 + 6;
int mul1[MX],mul2[MX],one[MX],ar[MX],br[MX];
int main()
{
    //freopen("a.in", "r", stdin);
    //freopen("a.out", "w", stdout);
    int n;
    while(scanf("%d",&n)!=EOF)
    {
        //map<int,int>one,two;
        int maximum_ar=0;
        int maximum_br=0;
        for(int i=0; i<n; i++)
        {
            //cin>>ar;
            scanf("%d",&ar[i]);
            one[ar[i]]=1;
            maximum_ar=max(maximum_ar,ar[i]);
        }
        //Storing Largest Multiple in ar[index]
        for(int i=1; i<=maximum_ar; i++)
        {
            for(int j=i; j<=maximum_ar; j+=i)
            {
                if(one[j]==1)
                {
                    mul1[i]=j;
                }
            }
            //cout<<"first = "<<mul1[i]<<endl;
        }
        memset(one,0,sizeof(one));
        for(int i=0; i<n; i++)
        {
            //cin>>br;
            scanf("%d",&br[i]);
            one[br[i]]=1;
            maximum_br=max(maximum_br,br[i]);
        }



        //Soring Largest Multiple in br[Index];
        for(int i=1; i<=maximum_br; i++)
        {
            for(int j=i; j<=maximum_br; j+=i)
            {
                if(one[j]==1)
                {
                    mul2[i]=j;
                }
            }
            //cout<<"second = "<<mul2[i]<<endl;
        }


        //Finding Largest GCD and sum;

        int mx=0;
        for(int i=1; i<=max(maximum_ar,maximum_br); i++)
        {
            if(mul1[i]>0 && mul2[i]>0) mx=i;
        }
        printf("%d\n",mul1[mx]+mul2[mx]);
        //cout<<mul1[mx]+mul2[mx]<<endl;

    }


}

