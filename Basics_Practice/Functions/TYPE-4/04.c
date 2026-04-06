// Function: int subtract(int a, int b)
// Parameters: a and b (integers)
// Returns: a - b
// Main: Call with (10, 3), then (25, 10), then (100, 30)
#include<stdio.h>
int subtract(int a, int b)
{
    return a-b;
}

int main()
{
    printf("Subtraction of your input is:%d",subtract(10,3));
    printf("\nSubtraction of your input is:%d",subtract(25,10));
    printf("\nSubtraction of your input is:%d",subtract(100,30));

    return 0;
}