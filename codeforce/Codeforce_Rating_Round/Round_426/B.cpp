#include<bits/stdc++.h>
using namespace std;
int main()
{
    char st,ed,ch;
    int n,flag,test;
    while(cin>>st>>ed>>n)
    {
        n%=4;
        if(st=='<')
        {
            flag=0;
            test=0;
            if(n==0) ch='<';
            if(n==1) ch='^';
            if(n==2) ch='>';
            if(n==3) ch='v';

            if(ch==ed) flag=1;
            if(n==0) ch='<';
            if(n==1) ch='v';
            if(n==2) ch='>';
            if(n==3) ch='^';
            if(ch==ed) test=1;
            if(test && flag) cout<<"undefined"<<endl;
            else if(test) cout<<"ccw"<<endl;
            else cout<<"cw"<<endl;
        }


        if(st=='^')
        {

            flag=0;
            test=0;
            if(n==0) ch='^';
            if(n==1) ch='>';
            if(n==2) ch='v';
            if(n==3) ch='<';

            if(ch==ed) flag=1;//cout<<"cw"<<endl;
            if(n==0) ch='^';
            if(n==1) ch='<';
            if(n==2) ch='v';
            if(n==3) ch='>';
            if(ch==ed) test=1;
            if(test && flag) cout<<"undefined"<<endl;
            else if(test) cout<<"ccw"<<endl;
            else cout<<"cw"<<endl;


        }


        if(st=='>')
        {

            flag=0;
            test=0;
            if(n==0) ch='>';
            if(n==1) ch='v';
            if(n==2) ch='<';
            if(n==3) ch='^';

            if(ch==ed) flag=1;//cout<<"cw"<<endl;

            if(n==0) ch='>';
            if(n==1) ch='^';
            if(n==2) ch='<';
            if(n==3) ch='v';
            if(ch==ed) test=1;//cout<<"ccw"<<endl;
            //else cout<<"undefined"<<endl;
            if(test && flag) cout<<"undefined"<<endl;
            else if(test) cout<<"ccw"<<endl;
            else cout<<"cw"<<endl;
        }





        if(st=='v')
        {

            test=0;
            flag=0;
            if(n==0) ch='v';
            if(n==1) ch='<';
            if(n==2) ch='^';
            if(n==3) ch='>';

            if(ch==ed) flag=1;//cout<<"cw"<<endl;
            if(n==0) ch='v';
            if(n==1) ch='>';
            if(n==2) ch='^';
            if(n==3) ch='<';
            if(ch==ed) test=1;//cout<<"ccw"<<endl;
            //else cout<<"undefined"<<endl;
            if(test && flag) cout<<"undefined"<<endl;
            else if(test) cout<<"ccw"<<endl;
            else cout<<"cw"<<endl;
        }




    }
}

