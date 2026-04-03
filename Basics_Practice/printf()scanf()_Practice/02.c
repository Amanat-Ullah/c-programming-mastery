// Ask user for their age and store it
// Print: "You are X years old"

#include<stdio.h>

int main()
{
    int age;
    printf("Enter your age:");
    scanf(" %d", &age);
    printf("You are %d years old", age);
}