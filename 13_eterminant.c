// ......................................This code is created by ankit kumar.....................................................

#include <stdio.h>

int main()
{

    int mat[2][2];
    printf("Enter elements of amtrix 1:\n");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("[%d]row [%d]ele: ", i + 1, j + 1);
            scanf("%d", &mat[i][j]);
        }
        printf("\n");
    }
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
    printf("Determimant = %d", deter);
    return 0;
}