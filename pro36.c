// example of array
#include <stdio.h>
void main()
{
    // decalaring a array
    int student[5], count;
    // input using array
    for (count = 0; count < 5; count++)
    {
        printf("\n enter the mark of student %d:", count + 1);
        scanf("%d", &student[count]);
    }
    for (count = 0; count < 5; count++)
    {
        printf("\n mark of student %d are %d", count + 1, student[count]);
    }
    
}