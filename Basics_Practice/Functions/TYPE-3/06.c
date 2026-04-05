// Function: void print_rectangle_stats(int length, int width)
// Parameters: length and width (integers)
// Task: Calculate and print area and perimeter
// Output format: "Area: X, Perimeter: Y"
// Main: Call with (5, 3), then (10, 7)

#include<stdio.h>

void print_rectangle_stats(int length, int width)
{
    int Area= length*width;
    int Parameter=2*length+2*width;
    printf("\nArea: %d, Parameter: %d",Area,Parameter);
}

int main()
{
    print_rectangle_stats(5,3);
    print_rectangle_stats(10,7);
    return 0;
}