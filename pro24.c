#include<stdio.h>
void main()
{
    int month;
    printf("enter the month:");
    scanf("%d",&month);
    if(month<=12 && month>=1)
    {
        if(month==2)
        {
            printf("28/29 days");
        }
        else
        {
            if(month<=7)
            {
                if(month %2==0)
                {
                    printf("30 days");
                }
                else
                {
                    printf("31 days");
                }
            }
            else
            {
                if (month %2==0)
                {
                   printf("31 days");
                }
                else
                {
                    printf("30 days");
                }
                
            }
        }
    }
    else
    {
        printf("invalid");
    }
}