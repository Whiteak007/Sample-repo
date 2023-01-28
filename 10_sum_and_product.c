// ......................................This code is created by ankit kumar.....................................................

#include <stdio.h>

int main()
{

    int arr[6];
    int sum = 0;
    int mul = 1;
    printf("Enter 6 random number:\n");
    for (int i = 0; i < 6; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < 6; i++)
    {
        // scanf("%d", &arr[i]);
        if (arr[i] % 2 == 0)
        {
            printf("Even = %2d\n", arr[i]);
            // printf("\n");
            sum = sum + arr[i];
        }
        else //(arr[i] % 2 != 0)
        {
            printf("odd = %2d\n", arr[i]);
            // printf("\n");
            mul = mul * arr[i];
        }
    }
    printf("Sum of six ramdom numbers is: = %d\n", sum);
    printf("Product of six ramdom numbers is: = %d\n", mul);

    return 0;
}