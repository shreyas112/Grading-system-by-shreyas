#include <stdio.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
int main()
{
    printf("Enter the marks of the student:");
    int marks = 0;
    scanf("%d",&marks);
    if(marks>=85 && marks <=100 )
    {
        printf("\nGrade A\n");
    }
    else if(marks>=70 && marks<=84)
    {
        printf("\nGrade B\n");
    }
    else if(marks>=55 && marks<=69)
    {
        printf("\nGrade C\n");
    }
    else if(marks>=40 && marks<=54)
    {
        printf("\nGrade D\n");
    }
    else if (marks>=0 && marks<=39)
    {
        printf("\nGrade F\n");
    }
    else
    {
        printf("Invalid input.\n");
        printf("Please enter correct marks.\n");
    }
}




