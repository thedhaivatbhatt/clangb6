// write a program to print following pattern
// 2 1 3 4 7 11 18 29 47 76 123 ... 3220

#include <stdio.h>
void main()
{
    int first = 2, second = 1, count = 0;
    printf(" %d", first);  // 2
    printf(" %d", second); // 1
    for (count = 0; second < 3220; count++)
    {
        first = first + second;  // 2+1=3
        printf(" %d", first);    // 3
        second = first + second; // 3+1=4
        printf(" %d", second);   // 4
    }

    // first=first+second;//3+4=7
    // printf(" %d",first);//7
    // second=first+second;//7+4=11
    // printf(" %d",second);//11
}