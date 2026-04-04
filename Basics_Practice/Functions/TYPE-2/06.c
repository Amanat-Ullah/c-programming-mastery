// Function: float get_celsius(void)
// Inside: Ask "Enter temperature in Celsius: " and scanf
// Returns: celsius (as float)
// Main: Print "Celsius = X.XX"

#include<stdio.h>
float get_celsius();
int main()
{
   float temp=get_celsius();
   printf("Celsius = %.2f", temp);
   return 0;
}

float get_celsius()
{
    float temp;
    printf("Enter temperature in Celsius:");
    scanf("%f", &temp);
    return temp;
}