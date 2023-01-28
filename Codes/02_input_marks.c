// ......................................This code is created by ankit kumar.....................................................

#include <stdio.h>

int main()
{

    int roll[5];
    int marks[5];

    printf("Enter the roll number of student 1:\n");
    scanf("%d", &roll[0]);
    printf("Enter the total marks of student 1:\n");
    scanf("%d", &marks[0]);

    printf("Enter the roll number of student 2:\n");
    scanf("%d", &roll[1]);
    printf("Enter the total marks of student 2:\n");
    scanf("%d", &marks[1]);

    printf("Enter the roll number of student 3:\n");
    scanf("%d", &roll[2]);
    printf("Enter the total marks of student 3:\n");
    scanf("%d", &marks[2]);

    printf("Enter the roll number of student 4:\n");
    scanf("%d", &roll[3]);
    printf("Enter the total marks of student 4:\n");
    scanf("%d", &marks[3]);

    printf("Enter the roll number of student 5:\n");
    scanf("%d", &roll[4]);
    printf("Enter the total marks of student 5:\n");
    scanf("%d", &marks[4]);

    printf("Student 1 roll %d who gained total marks %d.\n", roll[0], marks[0]);
    printf("Student 2 roll %d who gained total marks %d.\n", roll[1], marks[1]);
    printf("Student 3 roll %d who gained total marks %d.\n", roll[2], marks[2]);
    printf("Student 4 roll %d who gained total marks %d.\n", roll[3], marks[3]);
    printf("Student 5 roll %d who gained total marks %d.\n", roll[4], marks[4]);
    return 0;
}