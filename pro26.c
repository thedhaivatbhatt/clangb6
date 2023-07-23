// calc
#include <stdio.h>
void main()
{
    int num1, num2, option;
    float ans;
    printf("enter num1:");
    scanf("%d", &num1);
    printf("enter num2:");
    scanf("%d", &num2);

    printf("enter 1 to add \n enter 2 sub \n enter 3 mul \n enter 4 div \n enter 5 module \n enter 6 min \n enter 7 max \n enter 8 eql");
    printf("\n select any option:");
    scanf("%d", &option);

    switch (option)
    {
    case 1:
        ans = num1 + num2;
        printf("ans add: %.2f", ans);
        break;
    case 2:
        ans = num1 - num2;
        printf("ans sub: %.2f", ans);
        break;
    case 3:
        ans = num1 * num2;
        printf("ans mul: %.2f", ans);
        break;
    case 4:
        ans = num1 / num2;
        printf("ans div: %.2f", ans);
        break;
    case 5:
        ans = num1 % num2;
        printf("ans module: %.2f", ans);
        break;
    case 6:
        if (num1 < num2)
        {
            printf("num1 is big");
        }
        else
        {
            printf("num2 is big");
        }
    case 7:
        if (num1 > num2)
        {
            printf("num1 is small");
        }
        else
        {
            printf("num1 is small");
        }

    case 8:
        if (num1 == num2)
        {
            printf("num1 eql num2");
        }
        else
        {
            printf("num1 not eql num2");
        }
    default:
        break;
    }
}