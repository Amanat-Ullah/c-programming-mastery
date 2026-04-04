// Create function: void print_separator(void)
// Print 30 dashes: "------------------------------"
// Create function: void print_header(void)
// Print: "*** EMBEDDED SYSTEM STATUS ***"
// Call both from main to display a formatted header

#include<stdio.h>

void print_separator(void)
{
    printf("----------------------------------");
}

void print_header(void)
{
    printf("\n***EMBEDDED SYSTEM STATUS***");
}

int main()
{
  print_separator();
  print_header();
  return 0; 
}