//write a program to make cal.
#include<stdio.h>
void main()
{
    int a,b,ans,option;
    printf("enter a:");
    scanf("%d",&a);
    printf("enter b:");
    scanf("%d",&b);
    printf("\n enter add 1:");
    printf("\n enter sub 2:");
    printf("\n enter mul 3:");
    printf("\n enter div 4:");
    printf("\n enter module 5:");
    printf("\n enter max 6:");
    printf("\n enter min 7:");
    printf("\n enter eql 8:");
    printf("\n select any option");
    scanf("%d",&option);
    if (option==1)
    {
        ans=a+b;
        printf("add:%d",ans);
    }
    else if (option==2)
    {
       ans=a-b;
       printf("sub:%d",ans);
    }
    else if (option==3)
    {
        ans=a/b;
        printf("mul:%d",ans);
        /* code */
    }
    else if (option==3)
    {
        ans=a%b;
        printf("module:%d",ans);
        /* code */
    }
    else if (option==6)
    {
        if(a>b)
        {
            printf("a is greter");
        }
        else
        {
            printf("b is greter");
        }
        /* code */
    }
    else if (option==7)
    {
        if (a<b)
         {
            printf("a is lassthen");
        }
        else
        {
            printf("b is lassthen");
        }
        
        /* code */
    }
    else if (option==8)
    {
        if (a==b)
        {
            printf("both are eql");
            /* code */
        }
        else
        {
            printf("both are not eql");
        }
        
        /* code */
    }
    
    
    
    
    
    
}