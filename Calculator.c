#include<stdio.h>

void main()
{
    printf("                         Calculator                           \n\n\n");

    int ch;
    float x, y, z;
    char c;

    printf("Enter first number: ");
    scanf("%f",&x);
    
    printf("Enter Second number: ");
    scanf("%f",&y);
   
       printf("\n1. Addition \n");
        printf("2. Subtraction \n");
        printf("3. Multiplication \n");
        printf("4. Division \n");
        printf("5. Exit \n");
    
        printf("Enter your choice: ");
        scanf("%d",&ch);
    
        switch(ch)
        {
            case 1: z = x+y;
                printf("Addition is=%.2f",z);
            break;

            case 2: z=x-y;
                printf("Subtraction is=%.2f", z);
            break;
            case 3: z=x*y;
                printf("Multiplication is=%.2f", z);
            break;

            case 4: z=x/y;
                printf("Division is=%.2f",z);
            break;

            case 5: 
            break; 
        
            default: printf("Please Enter correct choice: ");

        }    

}