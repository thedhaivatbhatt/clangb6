// 2 office in height & breath give which office is big and which office is small 

#include<stdio.h>
void main()
{
    int height1,breath1,office1,height2,breath2,office2;
    printf("enter the value of height1:");
    scanf("%d",&height1);
    printf("enter the value of breath1:");
    scanf("%d",&breath1);
    printf("enter the value of height2");
    scanf("%d",&height2);
    printf("enter the value of breath2:");
    scanf("%d",&breath2);

    office1=height1*breath1;
    office2=height2*breath2;

    if(office1<office2)
    {
        printf("the size of office1 is small");
    }
    else
    {
        
        printf("the size of office2 is small");
    }
    printf("\n good bye");

}