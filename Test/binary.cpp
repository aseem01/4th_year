#include<stdio.h>
#include<iostream>
using namespace std;
void bin(unsigned n)
{
    unsigned i;
    int c = 1<<31;//here,1=00000000000000000000000000000001; when 31 bit left shift then it's look like 1=10000000000000000000000000000000,it's value is minus because is sine bit is 1;
    cout<<"c = "<<c<<endl;
    for (i = 1 << 31; i > 0; i = i / 2)//here i initial value is c ,then it's divide by 2;
    {
        cout<<"i = "<<i<<endl;//to check i value for every iteration;
        int keep=n&i;//here  n and i ,and operation .like a=1001,b=1000 then a&b=1000 is result 8 in decimal representation;
        cout<<"keep = "<<keep<<endl;
        if(keep) cout<<"1";//if keep and(&) operation is true then print 1 otherwise 0;
        else cout<<"0";
        //(n & i)? printf("1"): printf("0");
    }
    cout<<endl;
}

int main(void)
{
    bin(7);
    //printf("\n");
    //bin(4);
}

