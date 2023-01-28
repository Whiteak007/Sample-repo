// ......................................This code is created by ankit kumar.....................................................

#include <stdio.h>

int main()
{

    int arr[5];
    int res = 0;
    int rem;
    printf("Enter 5 random numbers:\n");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
    }
    while (arr[0] > 0)
    {
        rem = arr[0] % 10;
        res = res * 10 + rem;
        arr[0] = arr[0] / 10;
    }
    printf("\nReverse of 1st element of array is %d", res);

    return 0;
}