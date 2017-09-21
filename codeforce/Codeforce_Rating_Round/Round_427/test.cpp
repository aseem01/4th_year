#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
    char str[100],ch;
    int i,len,s,pos,k;
    scanf("%s", &str);
    len=strlen(str);
    int number=0;
    for(i=0; i<len; i++)
    {
        if((str[i]>='a' && str[i]<='z') || (str[i]>='A' && str[i]<='Z'))
        {
            for(k=0;k<number;k++)
            {
                printf("%c",ch);
            }
            ch=str[i];
            number=0;
        }
        else
        {
            number=number*10+(str[i]-'0');
        }
    }
    for(k=0;k<number;k++)
    {
        printf("%c",ch);
    }
    printf("\n");
}
