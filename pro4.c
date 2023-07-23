#include<stdio.h>
void main()
{
    int a,b,tamp;
    printf("enter the value of a:");
    scanf("%d",&a);
    printf("enter the value of b:");
    scanf("%d",&b);

    tamp=a;
    a=b;
    b=tamp;

    printf("a:%d",a);
    printf("b:%d",b);


}