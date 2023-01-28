// ......................................This code is created by ankit kumar.....................................................

// #include <stdio.h>
// int prin_matrix(int m[3][3]);
// int main()
// {

//     int mat[3][3];
//     printf("Enter elements of matrix A[3x3]:\n");
//     for (int i = 1; i <= 3; i++)
//     {
//         for (int j = 1; j <= 3; j++)
//         {
//             printf("Enter [%d]r [%d}e = ",i, j);
//             scanf("%d", &mat[i][j]);
//         }
//         printf("\n");
//     }
//     printf("A = \n");
//     for (int i = 1; i <= 3; i++)
//     {
//         for (int j = 1; j <= 3; j++)
//         {
//             printf("\t%2d", mat[i][j]);
//         }
//         printf("\n");
//     }

//     int deter;
//     // deter = ;
//     return 0;
// }

#include<stdio.h>

    int main(){ 

    int mat[3][3];
    printf("Enter elements of matrix A[3x3]:\n");
    for (int i = 1; i < 4; i++)
    {
        for (int j = 1; j < 4; j++)
        {
            printf("Enter [%d]r [%d}e = ",i, j);
            scanf("%d", &mat[i][j]);
        }
        printf("\n");
    }
    printf("A = \n");
    // for (int i = 1; i < 4; i++)
    // {
    //     for (int j = 1; j < 4; j++)
    //     {
    //         printf("%d", mat[i][j]);
    //     }
    //     printf("\n");
    // }
return 0;
}