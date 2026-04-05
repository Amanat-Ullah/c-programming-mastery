// Function: void greet(char name[])
// Parameter: name (string)
// Task: Print "Hello [name]!"
// Main: Call with "Ali", then "Sara", then "Ahmed"

#include<stdio.h>
void greet(char name[20]);

void greet(char name[20])
{
    printf("%s", name);
}


int main()
{
    greet("Amanat Ullah");
    return 0;
}
