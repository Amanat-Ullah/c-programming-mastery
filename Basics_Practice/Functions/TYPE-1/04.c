// Create function: void get_age(void)
// Inside: Declare int age
// Ask user: "Enter your age: "
// Use scanf to store in age
// Print: "You are X years old"

#include<stdio.h>
void get_age(void)
{
    int age;
    printf("Enter your age: ");
    scanf(" %d", &age);
    printf("\n You are %d years old.", age);
}

int main()
{
    get_age();
    return 0;
}