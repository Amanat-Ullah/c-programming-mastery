// Create function: void get_float(void)
// Inside: Declare float temp
// Ask: "Enter temperature in Celsius: "
// Convert to Fahrenheit: (temp × 9/5) + 32
// Print: "X°C = Y°F"

#include<stdio.h>
void get_float(void)
{
    float temp;
    float k_temp;
  printf("Enter temperature in celsius:");
  scanf(" %f", &temp);
  k_temp=temp*9/5+32;
  printf("\n%.2f degree C = %.2f degree Fahrenheit", temp,k_temp);
}
int main()
{
    get_float();
    return 0;
}