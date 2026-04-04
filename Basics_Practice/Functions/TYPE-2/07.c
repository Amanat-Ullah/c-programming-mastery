// Function: float celsius_to_fahrenheit(void)
// Inside: Ask for Celsius, convert to Fahrenheit
// Returns: fahrenheit
// Main: Print "Fahrenheit = X.XX"

#include<stdio.h>

float celsius_to_fahrenheit();
float celsius_to_fahrenheit()
{
    float C_temp,F_temp;
    printf("Enter the temperature to convert to fahrenheit:");
    scanf("%f", &C_temp);
    return F_temp=C_temp*1.8+32;
    
}

int main()
{
    float temp=celsius_to_fahrenheit();
    printf("Fahrenheit = %.2f", temp);
    return 0;
}