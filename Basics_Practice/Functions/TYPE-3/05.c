// Function: void print_temperature(float celsius)
// Parameter: celsius (float)
// Task: Convert to Fahrenheit and print "X°C = Y°F"
// Main: Call with 0, 25, 100

#include<stdio.h>

void print_temperature(float celsius)
{
    float Fahrenheit=celsius*1.8+32;
    printf("\n%.2f Celsius = %.2f Fahrenheit", celsius, Fahrenheit);
}

int main()
{
    print_temperature(0);
    print_temperature(25);
    print_temperature(100);
    return 0;
}