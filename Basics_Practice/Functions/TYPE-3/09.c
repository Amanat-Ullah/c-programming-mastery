// Function: void print_divided(int a, int b)
// Parameters: a and b (integers)
// Task: Print quotient = a/b and remainder = a%b
// Output: "Quotient: X, Remainder: Y"
// Main: Call with (10, 3), then (20, 4), then (17, 5)

#include<stdio.h>

void print_divided(int a, int b)
{
    int quotient=a/b,remainder=a%b;
    printf("\nQuotient: %d, Remainder; %d", quotient, remainder);
}

int main()
{
    print_divided(10,3);
    print_divided(20,4);
    print_divided(17,5);

    return 0;
}