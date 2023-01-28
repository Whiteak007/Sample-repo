// ......................................This code is created by ankit kumar.....................................................

#include <stdio.h>

int main()
{

    int mat1[3][3] = {-5, 7, 9, 3, 0, 7, -63, 54};
    int mat2[3][3] = {9, 0, 12, 36, 32, -25, -6, -45, 35};
    int sum[3][3];
    for (int i = 0; i <= 2; i++)
    {
        for (int j = 0; j <= 2; j++)
        {
            sum[i][j] = mat1[i][j] + mat2[i][j];
        }
    }
    for (int i = 0; i <= 2; i++)
    {
        for (int j = 0; j <= 2; j++)
        {
            // sum[i][j] = mat1[i][j] + mat2[i][j];
            printf("%5d", sum[i][j]);
        }
        printf("\n");
    }

    return 0;
}