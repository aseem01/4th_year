#include<cstdio>

int main()
{
    int n;
    scanf("%d",&n);
    if(n<9)
        putchar('0');
    else if(n==9)
        putchar('8');
    else
    {
        putchar('7');
        putchar('2');
        n-=10;
        while(n--)
            putchar('0');
    }
    return 0;
}
