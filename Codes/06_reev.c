// ......................................This code is created by ankit kumar.....................................................

#include <stdio.h>

int main()
{

    int num[10];
    printf("Enter 10 elemeents:\n");
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &num[i]);
    }
    printf("Reverse of entered array elements list are :\n");
    for (int i = 9; i >= 0; i--)
    {
        if (i == 0)
        {
            printf("%d ", num[i]);
        }
        else
        {
            printf("%d ", num[i]);
        }
    }

    return 0;
}

// #include <stdio.h>

// int main()
// {

//     int temp;
//     int num[10], res = 0, store;
//     for (int i = 1; i <= 10; i++)
//     {
//         printf("Enter %d number :- ", i);
//         scanf("%d", &num[i]);
//     }
//     for (int i = 0; i < num[i] / 2; i++)
//     {
//         temp = num[i];
//         num[i] = num
//     }

//     return 0;
// }
// #include <stdio.h>

// int main()
// {

//     int num, res = 0, store;
//     printf("Enter a number:\n");
//     scanf("%d", &num);
//     while (num > 0)
//     {
//         store = num % 10;
//         res = res * 10 + store;
//         num = num / 10;
//     }
//     printf("%d", res);

//     return 0;
// }