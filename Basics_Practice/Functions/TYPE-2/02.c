// Function: int add_two_numbers(void)
// Inside: Declare int a=10, b=20, sum=a+b
// Returns: sum
// Main: Print "Sum = 30"

#include<stdio.h>
int add_two_numbers()
{
    int a=10, b=20, sum=a+b;
    return sum;
}


int main()
{
    int Sum=add_two_numbers();
    printf("%d", Sum);
    return 0;
}