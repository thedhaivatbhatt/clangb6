// if (/* condition */)
// {
//     /* code */
// }
// else if (/* condition */)
// {
//     /* code */
// }
// else
// {
//     /* code */
// }

//write a program accepet month number from user 
// < , > , >= ,<= , == ,!=,&&(and),||(or)
#include<stdio.h>
void main()
{
    int month;

    printf("enter the month :");
    scanf("%d",&month);
    if(month == 1)
    {
        printf("jan month 31 days");
    }
    else if (month == 2)
    {
        printf("fab month 28/29 days");
    }
     else if (month == 3)
    {
        printf("mar month 31 days");
    }
     else if (month == 4)
    {
        printf("apr month 30 days");
    }
     else if (month == 5)
    {
        printf("may month 31 days");
    }
     else if (month == 6)
    {
        printf("jun month 30 days");
    }
     else if (month == 7)
    {
        printf("jul month 31 days");
    }
     else if (month == 8)
    {
        printf("aug month 31 days");
    }
     else if (month == 9)
    {
        printf("sap month 30 days");
    }
     else if (month == 10)
    {
        printf("otc month 31 days");
    }
     else if (month == 11)
    {
        printf("nov month 30 days");
    }
     else if (month == 12)
    {
        printf("dec month 31 days");
    }
    else
    {
        printf("good bye");
    }
    

}


