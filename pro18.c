// &&(and)(athva),||(or)(ane)
//write a program to find out which number is grater out of given 3 num...
#include<stdio.h>
void main()
{
    int a,b,c;
    printf("enter the a:");
    scanf("%d",&a);
    printf("enter the b:");
    scanf("%d",&b);
    printf("enter the c:");
    scanf("%d",&c);

    if(a>b && a>c)
    {
        printf("a is grater");
    }
    else if (b>a && b>c)
    {
        printf("b is greter");
    }
    else if (c>a && c>b)
    {
        
        printf("c is greter");
    }
    else
    {
        printf("all are same");
    }

    
} 