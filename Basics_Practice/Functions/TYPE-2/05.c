// Function: int get_and_square(void)
// Inside: Ask for one integer, square it (num × num)
// Returns: square
// Main: Print "Square = X"
#include<stdio.h>
int get_and_square();
int main()
{
    int square=get_and_square();
    printf("Square = %d", square);
    return 0;
}

int get_and_square()
{
    int num;
    printf("Enter number for its square:");
    scanf("%d", &num);
    return num*num;
}