// Function: void print_area(float length, float width)
// Parameters: length and width (float)
// Task: Calculate area = length × width, print with 2 decimals
// Main: Call with (5.5, 3.2), then (10.0, 4.5)

#include<stdio.h>
//void print_area();

void print_area(float length, float width)
{
    float Area=length*width;
    printf("\nArea is: %.2f", Area);
}

int main()
{
    print_area(5.5,3.2);
    print_area(10.0,4.5);
    return 0;
}