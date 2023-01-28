// ......................................This code is created by ankit kumar.....................................................

#include <stdio.h>
int main()
{

    int emp[5];
    int sal[5];
    int i;
    char ch = 'y';

    while (ch == 'y')
    {
        for (i = 1; i <= 5; i++)
        {
            printf("\n Enter the code of employee %d is :", i);
            scanf("%d", &emp[i]);
        }
        for (i = 1; i <= 5; i++)
        {
            printf("\n Enter the salary of employee %d is :", i);
            scanf("%d", &sal[i]);
        }
        for (i = 1; i <= 5; i++)
        {
            printf("\n Employee %d whose salary is %d.", emp[i], sal[i]);
        }
    }
        return 0;
    }