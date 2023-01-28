// ......................................This code is created by ankit kumar.....................................................

#include <stdio.h>

int main()
{

    char vovel[10] = {'A', 'E', 'I', 'O', 'U', 'a', 'e', 'i', 'o', 'u'};
    int r, i, fact = 0;
    char search;
    printf("Please! Enter an alphabate for search:-\n");
    scanf("%c", &search);
    for (i = 0; i < 10; i++)
    {
        if (vovel[i] == search)
        {
            fact = 1;
            break;
        }
    }

    if (fact == 1)
    {
        printf("Vovel %c is found in array list.\n", search);
    }
    else
    {
        printf("%c is not found in array list.\n", search);
    }

    return 0;
}