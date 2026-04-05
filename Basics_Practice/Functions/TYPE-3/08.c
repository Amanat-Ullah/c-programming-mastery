// Function: void print_power(int base, int exponent)
// Parameters: base and exponent (integers)
// Task: Calculate base^exponent (multiply manually, no loops yet)
// Note: For exponent 3: base × base × base
// Main: Call with (2, 3), then (3, 2), then (5, 1)

#include<stdio.h>

void print_power(int base, int exponent)
{
    int result;
    
    if(exponent==1)
    {
        result=base;
    } 

       else if(exponent==2)
       {
        result=base*base;
       }

       else if(exponent==3)
       {
        result=base*base*base;
       }
        else
       {
        printf("Out of scope!");
       }
    printf("%d\n",result);
}

int main()
{
    print_power(2,3);
    print_power(3,2);
    print_power(5,1);
    return 0;
}