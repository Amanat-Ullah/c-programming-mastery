// Function: void print_formatted_number(int num)
// Parameter: num (integer)
// Task: Print in decimal, hex, and octal formats
// Output: "Decimal: X, Hex: X, Octal: X"
// Main: Call with 255, then 100, then 42

#include<stdio.h>
void print_formatted_number(int num)
{
  printf("\nDecimal: %d, Hex: %x, Octal: %o", num, num, num);
}

int main()
{
    print_formatted_number(255);    
    print_formatted_number(100);
    print_formatted_number(42);

    return 0;
}