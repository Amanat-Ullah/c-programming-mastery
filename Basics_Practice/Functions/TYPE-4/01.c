// Function: int add_two(int a, int b)
// Parameters: a and b (integers)
// Returns: sum of a and b
// Main: Call with (5, 3), print "5 + 3 = 8"
// Call with (10, 20), print "10 + 20 = 30"

#include<stdio.h>
int add_two(int a, int b)
{
    return a+b;
    
}

int main()
{

    int result=add_two(5,3);
    int result1=add_two(10,20);
    printf("Sum=%d\nsum=%d",result,result1);
    return 0;
}
