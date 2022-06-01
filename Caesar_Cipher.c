#include<stdio.h>
void main()
{
    int key, i;
    char ch, msg[100];

    printf("Enter your message: ");
    scanf("%s",&msg);

    printf("Enter your key: ");
    scanf("%d", &key);

    for(i=0; msg[i] !='\0'; i++)
    {
        ch=msg[i];
        if(ch>='a' && ch<='z')
        {
            if(ch=='x')
            {
                msg[i]='a';
            }
            else if(ch=='y')
            {
                msg[i]='b';
            }
            else if(ch=='z')
            {
                msg[i]='c';
            }
            else
            {
                ch=ch+key;
                msg[i]=ch;
            }

        }

        else if(ch>='A' && ch<='Z')
        {
             if(ch=='X')
            {
                msg[i]='A';
            }
            else if(ch=='Y')
            {
                msg[i]='B';
            }
            else if(ch=='Z')
            {
                msg[i]='C';
            }
            else
            {
                ch=ch+key;
                msg[i]=ch;
            }
        }
    }
    printf("The encrypted message is: %s", msg);

}