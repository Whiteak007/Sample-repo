// ......................................This code is created by ankit kumar.....................................................

#include <stdio.h>

int main()
{

    int a[2][2], b[2][2], c[2][2];
    printf("\nPlease! Enter data for matrix 1:\n");
    for (int i = 1; i < 3; i++)
    {
        for (int j = 1; j < 3; j++)
        {
            printf("Enter the value of [%d] [%d] = ", i, j);
            scanf("%d", &a[i][j]);
        }
    }
    printf("\nPlease! Enter data for matrix 2:\n");

    for (int i = 1; i < 3; i++)
    {
        for (int j = 1; j < 3; j++)
        {
            printf("Enter the value of [%d] [%d] = ", i, j);
            scanf("%d", &b[i][j]);
        }
    }

    for (int i = 1; i < 3; i++)
    {
        for (int j = 1; j < 3; j++)
        {
            c[i][j] = a[i][j] + b[i][j];
        }
    }

    printf("\nSum of matrix 1 and matrix 2 is:\n");
    for (int i = 1; i < 3; i++)
    {
        for (int j = 1; j < 3; j++)
        {
            printf("%5d", c[i][j]);
        }
        printf("\n");
    }
    return 1;
}