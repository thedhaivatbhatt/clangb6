// switch (name of variable)
// {
// case 10:

// break;
// case 11:

// break;
// default:
//     break;

// }
//write a program to findout whether the give alphabet is vowel or not
#include<stdio.h>
void main()
{
    char latter;
    printf("enter the latter:");
    scanf("%c",&latter);
    switch (latter)
    {
    case 'a':
        printf("it is vowel");
        break;
    case 'e':
        printf("it is vowel");
        break;
    default:
        break;
    }
}