#include<bits/stdc++.h>
using namespace std;
int FindMinimumInsertion(char str[],int l,int h)
{
    if(l>h) return INT_MAX;
    if(l==h) return 0;
    if(l==h-1) return (str[l]==str[h])?0:1;
    return (str[l] == str[h])? FindMinimumInsertion(str, l + 1, h - 1):
           (min(FindMinimumInsertion(str, l, h - 1),
                FindMinimumInsertion(str, l + 1, h)) + 1);
}
int main()
{
    char str[1001];
    int t=1,test;
    cin>>test;
    while(test--)
    {
        cin>>str;
        cout<<"Case "<<t++<<": "<<FindMinimumInsertion(str,0,strlen(str)-1)<<endl;
    }

}
