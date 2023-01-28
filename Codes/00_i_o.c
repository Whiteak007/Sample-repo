// ......................................This code is created by ankit kumar.....................................................

// // #include <stdio.h>

// // int main()
// // {

// //     int arr[10];
// //     printf("Enter 10 Integer value:\n");
// //     for (int i = 0; i < 10; i++)
// //     {
// //         scanf("%d", &arr[i]);
// //     }
// //     for (int i = 0; i < 10; i++)
// //     {
// //         printf("%d ", arr[i]);
// //     }

// //     return 0;
// // }

#include <stdio.h>

int main()
{

    // int i;
    int n;
    int num;
    int sum = 0;
    float avg;
    printf("Enter the value of N:-\n");
    scanf("%d", &n);
    printf("Enter %d Inteer elements:\n", n);
    for (int i = 1; i <= n; i++)
    {
        printf("Enter %d :-", i);
        scanf("%d", &num);
        sum = sum + num;
    }
    avg = sum / 10;
    printf("Sum = %d", sum);
    printf("average = %f", avg);
    // {
    //     printf("%d",k);
    // }

    return 0;
}
