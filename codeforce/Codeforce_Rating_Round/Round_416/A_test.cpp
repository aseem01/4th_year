#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b;

    while(cin>>a>>b)
    {
        int i=1;
        int first=0;
        int second=0;
        int flaga=0;
        int flagb=0;
        while(true)
        {
            if(i%2 ) first+=i;
            else second+=i;
            //cout<<"first = "<<first<<" second = "<<second<<" i = "<<i<<endl;
            if(first>a)
            {
                flaga=1;
                break;
            }
            if(second>b)
            {
                flagb=1;
                break;
            }


            i++;

        }
        //cout<<"flaga = "<<flaga<<" flagb = "<<flagb<<endl;
        if(flaga) cout<<"Vladik"<<endl;
        else cout<<"Valera"<<endl;
    }
}

