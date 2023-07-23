#include<stdio.h>
void main()
{
    int num1=1000,num2=500;

    num1=num1+num2;//1000+500=1500(num1)
    num2=num1-num2;//(num1)1500-(num2)500=1000
    num1=num1-num2;//(num1)1500-(num2)1000=500

    printf("num1:%d",num1);
    printf("num2:%d",num2);


}