// ......................................This code is created by ankit kumar.....................................................

#include <stdio.h>
#include <conio.h>
void main()
{

    int emp[5];
    int sal[5];
    int i;
    char yes = 'y';
    char no = 'n';

    while (yes == 'y')
    {
        while (no == 'n')
        {
            for (i = 1; i <= 2; i++)
            {
                printf("\n Enter the code of employee %d is :", i);
                scanf("%d", &emp[i]);
            }
            for (i = 1; i <= 2; i++)
            {
                printf("\n Enter the salary of employee %d is :", i);
                scanf("%d", &sal[i]);
            }
            for (i = 1; i <= 2; i++)
            {
                printf("\n Employees code %d whose salary is %d.", emp[i], sal[i]);
            }
            printf("\n Press y for again execution:");
            printf("\n Press n for stop execution:");
            yes = getch();
            break;
            no = getch();
            break;
        }
    }
}