// ......................................This code is created by ankit kumar.....................................................

#include <stdio.h>

int main()
{

    int i, k, number[10];
    printf("Enter 10 elements of an array:- \n");
    for (i = 0; i < 10; i++)
    {
        printf("Enter %d element:= ", i + 1);
        scanf("%d", &number[i]);
    }
    printf("The prime numbers are identified after checking are :");
    for (k = 0; k < 10; k++)
    {
        int fact = 0;
        for (i = 2; i <= number[k] / 2; i++)
        {
            if (number[k] % i == 0)
            {
                fact++;
                break;
            }
        }
        if (fact == 0)
        {
            printf("%d ", number[k]);
        }
    }

    return 0;
}