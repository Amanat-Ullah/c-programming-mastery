// Function: int get_three_sum(void)
// Inside: Ask for three integers, add them
// Returns: sum
// Main: Print "Total = X"

#include<stdio.h>

int get_three_sum();

int main()
{
    int sum=get_three_sum();
    printf("Total= %d", sum);
    return 0;
}

int get_three_sum()
{
    int num1,num2,num3;
    printf("Enter First Integer:");
    scanf("%d", &num1);
    printf("Enter second integer:");
    scanf("%d", &num2);
    printf("Enter thirsd Integer:");
    scanf("%d", &num3);

    return num1+num2+num3;
}