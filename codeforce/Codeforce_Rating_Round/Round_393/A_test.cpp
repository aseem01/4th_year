#include<bits/stdc++.h>
using namespace std;
int main()
{
    int month,d;
    while(cin>>month>>d)
    {
        if(month==1)//31
        {
            if(d==6 || d==7) cout<<"6";
            else if(d>=1 && d<=5) cout<<"5"<<endl;
        }
        else if(month==2)
        {
            if(d==1) cout<<"4";
            else cout<<"5"<<endl;
        }
        if(month==3)//31
        {
            if(d==6 || d==7) cout<<"6";
            else if(d>=1 && d<=5) cout<<"5"<<endl;
        }
        else if(month==4)//30
        {
            if(d==7) cout<<"6";
            else cout<<"5"<<endl;
        }
        if(month==5)//31
        {
            if(d==6 || d==7) cout<<"6";
            else if(d>=1 && d<=5) cout<<"5"<<endl;
        }
        else if(month==6)//30
        {
            if(d==7) cout<<"6";
            else cout<<"5"<<endl;
        }
        if(month==7)//31
        {
            if(d==6 || d==7) cout<<"6";
            else if(d>=1 && d<=5) cout<<"5"<<endl;
        }
        if(month==8)//31
        {
            if(d==6 || d==7) cout<<"6";
            else if(d>=1 && d<=5) cout<<"5"<<endl;
        }
        else if(month==9)//30
        {
            if(d==7) cout<<"6";
            else cout<<"5"<<endl;
        }
        if(month==10)//31
        {
            if(d==6 || d==7) cout<<"6";
            else if(d>=1 && d<=5) cout<<"5"<<endl;
        }
        else if(month==11)//30
        {
            if(d==7) cout<<"6";
            else cout<<"5"<<endl;
        }
        if(month==12)//31
        {
            if(d==6 || d==7) cout<<"6";
            else if(d>=1 && d<=5) cout<<"5"<<endl;
        }
    }
}

