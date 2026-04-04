// Function: int multiply_inputs(void)
// Inside: Ask for two integers, multiply them
// Returns: product
// Main: Print "Product = X"

#include<stdio.h>

int multiply_inputs()
{
    int num1,num2;
    printf("Enter first number to multiply:");
    scanf("%d",&num1);
    printf("Enter second number:");
    scanf("%d",&num2);
    return num1*num2;
}

int main()
{
    int mult=multiply_inputs();
    printf("%d", mult);
    return 0;
}