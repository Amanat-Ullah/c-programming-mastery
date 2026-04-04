// Function: float get_average(void)
// Inside: Ask for three floats, calculate average
// Returns: average
// Main: Print "Average = X.XX"

#include<stdio.h>
float get_average();

int main()
{
    float ave=get_average();
    printf("Average = %.2f", ave);
    return 0;
}

float get_average()
{
    float num1,num2,num3;
    printf("Enter first float:");
    scanf("%f", &num1);
    printf("Enter second float:");
    scanf("%f", &num2);
    printf("Enter third float:");
    scanf("%f", &num3);
    return (num1+num2+num3)/3;
}