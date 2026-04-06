// Function: int square(int num)
// Parameter: num (integer)
// Returns: square of num (num × num)
// Main: Call with 5, 9, 12 and print each result

#include<stdio.h>
int square(int num)
{
    return num*num;
}

int main()
{
    int result=square(5);
    int result1=square(9);
    int result2=square(12);
    printf("Square of number is:%d""\nSquare of number is:%d""\nSquare of number is:%d", result,result1,result2);
}