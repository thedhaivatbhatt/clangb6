// a=1000,b=500;
// a=500,b=1000;

#include<stdio.h>
void main()
{
    int a=1000,b=500,tamp=0;
tamp=a;
a=b;
b=tamp;

printf("a:%d \n",a);
printf("b:%d \n",b);

}