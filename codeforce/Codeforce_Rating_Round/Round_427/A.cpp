#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,v1,v2,s1,s2;
    while(cin>>n>>v1>>v2>>s1>>s2)
    {
        int first=n*v1+(s1*2);
        int second=n*v2+(s2*2);
        if(first<second) cout<<"First"<<endl;
        else if(first>second) cout<<"Second"<<endl;
        else cout<<"Friendship"<<endl;
    }
}

