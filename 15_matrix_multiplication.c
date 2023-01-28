// ......................................This code is created by ankit kumar.....................................................

#include <stdio.h>
#define ROW1 2
#define COL1 2
#define ROW2 COL1
#define COL2 2
int main()
{
    int mat1[ROW1][COL1], mat2[ROW2][COL2], mat3[ROW1][COL2];
    int i, j, k;
    printf("Enter matrix mat1(%d x %d) row=wise: \n", ROW1, COL1);
    for (i = 0; i < ROW1; i++)
    {
        for (j = 0; j < COL1; j++)
        {
            scanf("%d", &mat1[i][j]);
        }
    }
    printf("Enter matrix mat2(%d x %d) row=wise: \n", ROW2, COL2);
    for (i = 0; i < ROW2; i++)
    {
        for (j = 0; j < COL2; j++)
        {
            scanf("%d", &mat2[i][j]);
        }
        printf("\n");
    }
    // Multiplication of matrixs
    for (i = 0; i < ROW1; i++)
    {
        for (j = 0; j < COL2; j++)
        {
            mat3[i][j] = 0;
            for (k = 0; k < COL1; k++)
            {
                mat3[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }

    // print
    printf("Multiplication of (%d x %d)matwix is ::\n ", ROW1, COL1);
    for (i = 0; i < ROW1; i++)
    {
        for (j = 0; j < COL2; j++)
        {
            printf("\t%2d", mat3[i][j]);
            printf("\n");
        }
    }
}
