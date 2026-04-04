// Create function: void rectangle_area(void)
// Inside: Declare float length, width
// Ask user for length and width
// Calculate and print area
#include<stdio.h>
void rectangle_area(void)
{
    int length,width,area;
    printf("Enter length and width of rectangle rectangle:");
    scanf(" %d", &length);
    scanf(" %d",&width);
    area= length*width;
    printf("Area of rectangle is: %d",area);
}

int main()
{
    rectangle_area();
    return 0;
}