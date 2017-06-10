#include<bits/stdc++.h>

int MAX = 10000000;
int LMT = 10000;
int  flag[MAX];
int a[5000010];
#define ifcV(x) (flag[x>>6]&(1<<((x>>1)&31))) //to check if prime or not
#define iscV(x) (flag[x>>6]|=(1<<((x>>1)&31))) //To mark as Prime

void sieve() {
    register int i, j, k,count=1;
    for(i = 3; i <LMT; i+=2)
        if(!ifcV(i))
            for(j=i*i, k=i<<1; j < MAX; j+=k) //loop to mark multipiples
                iscV(j);


    a[0]=2;
    for(i=3 ; i < MAX && count<5000001; i+=2)
    {
        if(!ifcV(i))
        {
           a[count++]=i; //Storing K'th prime in array to access in O(1)

        }
    }
}


int main()
{
    int t,k;
    scanf("%d",&t);
    sieve();
    while(t--)
    {scanf("%d",&k);
    printf("%d\n",a[k-1]);
    }
    return 0;
}
