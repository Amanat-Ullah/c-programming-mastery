// Function: void add_and_display(int a, int b)
// Parameters: a and b (integers)
// Task: Calculate sum and print "Sum of X and Y is Z"
// Main: Call with (10, 20), then (5, 15), then (100, 200)

#include<stdio.h>

void add_and_display();

void add_and_display(int a, int b)
{
    int sum=a+b;
    printf("\nSum of %d and %d is %d", a,b,sum);
}

int main()
{
    add_and_display(10,20);
    add_and_display(5,15);
    add_and_display(100,200);
    return 0;
}