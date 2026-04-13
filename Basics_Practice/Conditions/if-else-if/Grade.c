/*
Problem:
Take marks (0–100) and print grade:

90+ → A
75–89 → B
60–74 → C
50–59 → D
Below 50 → Fail
*/

#include<stdio.h>
void grade(int marks){
    if(marks>100){
        printf("Invalid entry!");
    }
    else if(marks>=90){
        printf("Grade A");
    }
    else if(marks>=75){
        printf("Grade B");
    }
    else if(marks>=60){
        printf("Grade C");
    }
    else if(marks>=50){
        printf("Grade D");
    }
    else
    {
        printf("Fail");
    }
}

int main()
{
    int marks;
    printf("Enter your marks: ");
    scanf("%d", &marks);
    grade(marks);
    return 0;
}
