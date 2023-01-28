// ......................................This code is created by ankit kumar.....................................................

#include <stdio.h>

int main()
{

    int mat[2][2];
    printf("Enter elements of amtrix A:\n");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("[%d]row [%d]ele: ", i + 1, j + 1);
            scanf("%d", &mat[i][j]);
        }
        printf("\n");
    }
    printf("A = \n");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("%4d", mat[i][j]);
        }
        printf("\n");
    }
    int ve = 1;
    int ve2 = -1;
    int deter;
    deter = (1 * mat[0][0] * (mat[1][1])) + ((-1) * mat[0][1] * (mat[1][0]));
    printf("Determimant = %d\n\n", deter);

    if (deter == 0)
    {
        printf("Here, determinant of matrix |A| is 0.So, iis inverse is not exist.\n");
    }
    else
    {
        printf("Here, determinant of matrix |A| is %d.So, iis inverse is exist.\n\n", deter);
    }

    printf("Now, we find its co-factor:\n");
    int c_f_1_1 = 1 * mat[0][0] * mat[1][1];
    int c_f_1_2 = -1 * mat[0][1] * mat[1][0];
    int c_f_2_1 = 1 * mat[1][0] * mat[0][1];
    int c_f_2_2 = -1 * mat[1][1] * mat[0][0];
    printf("Let, B be the matrix whose all elements are co - factor of matrix A:\n\n");
    printf("B =  %d     %d\n", c_f_1_1, c_f_1_2);
    printf("     %d     %d\n", c_f_2_1, c_f_2_2);

    printf("Adjoint of matrix A = transpose of matrix B:\n");
    printf("Now, we procced for its trnspose:\n\n");
    printf("Transpose of:\n\n");
    printf("B =  %d     %d\n", c_f_1_1, c_f_2_1);
    printf("    %d    %d\n", c_f_1_2, c_f_2_2);

    printf("Now,\n");
    // printf("Inverse of matrix A = \n");
    int inverse;
    // inverse = ((c_f_1_1  , c_f_2_1   ,c_f_1_2  ,  c_f_2_2) % deter);
    // printf("Inverse = %d",inverse);
    printf("Inverse of matrix A = (adj.of A / deter. A) :\n\n");
    printf("Therefore, Inverse of A = :\n\n");
    float i1, i2, i3, i4;
    i1 = (c_f_1_1 / deter);
    i2 = (c_f_2_1 / deter);
    i3 = (c_f_1_2 / deter);
    i4 = (c_f_2_2 / deter);
    printf("A-1 =  %.2f       %.2f\n\n", i1, i2);
    printf("       %.2f       %.2f\n\n", i3, i4);
        return 0;
}