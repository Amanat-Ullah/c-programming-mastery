// Function: void print_ascii(char ch)
// Parameter: ch (character)
// Task: Print "ASCII of 'X' is Y"
// Main: Call with 'A', 'b', 'Z', '1'

#include<stdio.h>

void print_ascii(char ch)
{
    printf("\nASCII of %c is %d", ch,ch);
  
}

int main()
{
    print_ascii('A');
    print_ascii('Z');
    print_ascii('1');
    print_ascii('b');
    return 0;
}