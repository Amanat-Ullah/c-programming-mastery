// Function: int get_ascii(void)
// Inside: Ask for a character, get its ASCII value
// Returns: ascii value (int)
// Main: Print "ASCII value is X"
#include<stdio.h>
int get_ascii();
int get_ascii()
{
    char Char;
    printf("Enter a character to find its ASCII:");
    scanf("%c", &Char);
    return Char;
}

int main()
{
  int ASCII=get_ascii();
  printf("ASCII value is %d", ASCII);
  return 0;
}