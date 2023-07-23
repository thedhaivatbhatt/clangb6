// write a program to new drive calc. user char
#include<stdio.h>
#include<stdlib.h>
void main()
{
    int num1,num2,option;
    float ans;
    char choice ='c';
    while(choice == 'c')
    {
        printf("enter num1:");
        scanf("%d",&num1);
        printf("enter num1:");
        scanf("%d",&num2);
        printf("\n 1 add \n 2 sub \n 3 mul \n 4 div");
        fflush(stdin);
        scanf("%c",&choice);
        if(choice == '1')
        {
            ans=num1+num2;
            printf("%f",ans);
        }
        else if(choice == '2')
        {
            ans=num1-num2;
            printf("%f",ans);
        }
        else if(choice == '3')
        {
            ans=num1*num2;
            printf("%f",ans);
        }
         else if(choice == '4')
        {
            ans=num1/num2;
            printf("%f",ans);
        }
        else
        {
            printf("invalid");
            fflush(stdin);
            printf("\n select your way \n press c for new start");
            scanf("%c",&choice);
        }
    }
}