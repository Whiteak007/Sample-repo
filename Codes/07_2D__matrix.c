// ......................................This code is created by ankit kumar.....................................................

#include <stdio.h>

int main()
{

    int arr[2][2];
    int i, j;
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            printf("Enter a[%d][%d]:", i, j);
            scanf("%d", &arr[i][j]);
        }
    }
    printf("\n printing the elements.........\n");
    for (i = 0; i < 2; i++)
    {
        printf("\n");
        for (j = 0; j < 2; j++)
        {
            printf("%d\t", arr[i][j]);
        }
    }

    return 0;
}