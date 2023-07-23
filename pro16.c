// wirte a program to findout give number is odd or even
// < , > , >= ,<= , == ,!=,&&(and),||(or)
// + - / * = % 
#include<stdio.h>
void main()
{
    int number;
    printf("enter the number:");
    scanf("%d",&number);
    if (number%2==0)
    {
        printf("even");
    }
    else
    {
        printf("odd");
    }
    
}
