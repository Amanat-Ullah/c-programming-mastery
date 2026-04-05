// Function: void print_square(int num)
// Parameter: num (integer)
// Task: Calculate square = num × num and print
// Main: Call with 5, then 10, then 12

#include<stdio.h>
void print_square();

void print_square(int  num)
{
    int sq=num*num;
    printf("\nSquare of %d is: %d", num,sq);
}

int main()
{
    print_square(5);
    print_square(10);
    print_square(12);
    return 0;
}