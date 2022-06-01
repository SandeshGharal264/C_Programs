#include<stdio.h>

void main()
{

     char arr1[10];

     char str[]="sandesh";
     
     int i, j, len;

     len=sizeof(str)-sizeof(char);

     printf("Size of str: %d",len);
     printf("\n");

    j=0;
     for(i=0; i<=len; )
     {
         arr1[j]=str[i];
         printf("%c   ",arr1[j]);
         j=j+1;
         i=i+2;
     }
     printf("\n");
     for(i=1; i<=len;)
     {
         arr1[j]=str[i];
         printf("  %c ",arr1[j]);
         j=j+1;
          i=i+2;
     }
     printf("\n");

     printf("The cipher text message is: %s",arr1);
     
}