/*
function float areaOfCircle(float radius) 
that returns the area of a circle (πr²). 
Use 3.1416 as pi. 
Call it with radius = 5.0.
*/
#include<stdio.h>

float areaOfCircle(float radius)
{
    return 3.1416*radius*radius;
}
int main()
{
    printf("Area of circle is: %.2f",areaOfCircle(5.0));
}
