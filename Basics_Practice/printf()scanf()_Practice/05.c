// Read a single character and print its ASCII value
// Input: A
// Output: "ASCII value of A is 65"

#include<stdio.h>
int main()
{
    char Char;
    printf("Enter a character to find its ASCII value:");
    scanf(" %c", &Char);
    printf("ASCII value of %c is %d", Char, Char);
    return 0;
}