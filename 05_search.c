// ......................................This code is created by ankit kumar.....................................................

/*
    WAP to search a number in given array list.
*/

#include <stdio.h>

int main()
{

    int search, fact = 0;
    int numbers[10];
    printf("Enter 10 different integer value:\n");
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &numbers[i]);
    }
    printf("Enter a number for search in array list:\n");
    scanf("%d", &search);
    for (int i = 0; i < 10; i++)
    {
        if (numbers[i] == search)
        {
            fact = 1;
            break;
        }
    }
    if (fact == 1)
    {
        printf(" %d is Found in your array list.\n", search);
    }

    else
    {
        printf("ERROR %d NOT FOUND..............\n", search);
    }
    return 0;
}

// #include <stdio.h>

// int main()
// {
//     int f = 0;
//     int num[10];
//     printf("Enter 10 numbers:\n");
//     for (int i = 0; i < 10; i++)
//     {
//         printf("Enter %d Element:", i + 1);
//         scanf("%d", &num[i]);
//     }
//     printf("The prime number is exist in array is :\n");
//     for (int k = 0; k < 10; k++)
//     {
//         for (int i = 2; i <= num[k] / 2; i++)
//         {
//             if (num[k] % i == 0)
//             {
//                 f++;
//                 break;
//             }
//         }
//         if (f == 0)
//         {
//             printf("%d", num[k]);
//         }
//     }
//     return 0;
// }