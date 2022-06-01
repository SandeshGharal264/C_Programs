#include<stdio.h>

void main()
{

char ptext[]="TUSHAR";
char key[]="ACCEPT";

int arr[100],arr1[100],arr2[100], i, j, k;

char az[]="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
char vm[100];
int len=sizeof(ptext)-1;

for(i=0; i<=len;i++)
{
    for(j=0;j<=25;j++)
    {
        if(ptext[i]==az[j])
        {
            printf("%c",ptext[i]);
            printf(" = %d ",j);
            arr[i]=j;
        }
    }
    printf("\t");
}

printf("\n");

for(i=0;i<=len;i++)
{
    for(j=0;j<=25;j++)
    {
        if(key[i]==az[j])
        {
            printf("%c",key[i]);
            printf(" = %d ",j);
            arr1[i]=j;
        }
    }
    printf("\t");
}
printf("\n");

for(i=0;i<len;i++)
{
    arr2[i]=arr[i]+arr1[i];
    if(arr2[i]>25)
    {
        arr2[i]=arr2[i]-26;
    }
}


for(i=0;i<len;i++)
{
    printf("%d\t",arr2[i]);
}
printf("\n");

for(i=0;i<len;i++)
{
 k=arr2[i];
 vm[i]=az[k];
 printf("%c\t",vm[i]);   
}

printf("\nThe cipher text is: ");
for(i=0;i<len;i++)
{
    printf("%c",vm[i]);
}

}