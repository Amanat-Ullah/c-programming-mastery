// Function: int multiply(int a, int b)
// Parameters: a and b (integers)
// Returns: product of a and b
// Main: Call with (4, 5), then (7, 8), then (10, 10)
#include<stdio.h>

int multiply(int a, int b)
{
    return a*b;
}

int main()
{
    int result=multiply(4,5); 
    int result1=multiply(7,8);
    int result2=multiply(10,10);
    printf("Multiplication of your input is:%d\n""Mul is %d\n""Your input multiplication is:%d", result,result1,result2);
}