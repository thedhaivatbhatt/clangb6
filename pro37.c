#include<stdio.h>
void main()
{
    int student[5],count=0,sum;
    float avg;

    for (count=0;count<5;count=count+1)
    {
        printf("enter the student %d ",count+1);
        scanf("%d",&student[count]);
    }
    for(count=0;count<5;count++)
    {
        printf("\n mark of student %d are %d",count+1,student[count]);
    }
    sum=0;
    for(count=0;count<5;count++)
    {
        sum=sum+student[count];
    }
    printf("\n total mark %d",sum);
    avg=sum/5;
    printf("\n avg of std is %f ",avg);
    
}