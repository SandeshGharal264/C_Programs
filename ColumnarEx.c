#include<stdio.h>

void main()
{
    char str[]="Sandesh";
    int len=sizeof(str)-1;

    int i,j;

printf("The Original Text is: %s\n",str);
    for(i=1;i<=6;i++)
    {
        printf("col%d\t",i);
    }

    printf("\n");
    j=0;
    while(j<len)
    {
        for(i=0;i<6;i++)
        {
            printf("%c\t",str[j]);
            j++;
        }
        printf("\n");
    }

    printf("\nSequence is: col3, col4, col6, col1, col2, col5\n");

    printf("The cipher text is: ");
    for(j=2;j<len;j=j+6)
    {
        printf("%c",str[j]);
    }

    for(j=3;j<len;j=j+6)
    {
        printf("%c",str[j]);
    }

    for(j=5;j<len;j=j+6)
    {
        printf("%c",str[j]);
    }

    for(j=0;j<len;j=j+6)
    {
        printf("%c",str[j]);
    }

    for(j=1;j<len;j=j+6)
    {
        printf("%c",str[j]);
    }

    for(j=4;j<len;j=j+6)
    {
        printf("%c",str[j]);
    }
}