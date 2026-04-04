// Function: int get_user_age(void)
// Inside: Ask "Enter your age: " and scanf
// Returns: age
// Main: Print "Age is X"
#include<stdio.h>
int get_user_age()
{
    int age;
    printf("Enter your age: ");
    scanf(" %d", &age);
    return age;
}

int main()
{
    int Age=get_user_age();
    printf("Age is %d", Age);
    return 0;
}