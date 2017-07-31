#include<stdio.h>
int PRIME(int n)
{
    int i;
    for(i=2; i*i<=n; i++)
        if(n%i==0)break;

    if(i*i>n)return 1;
    else return 0;
}
int main()
{
    int t,a,b,j;

    scanf("%d",&t);

    while(t--)
    {
        scanf("%d %d",&a,&b);

        for(j=a; j<=b; j++)
        {
            if(j==1)continue;
            if(PRIME(j))printf("%d\n",j);
        }
        printf("\n");
    }
}

