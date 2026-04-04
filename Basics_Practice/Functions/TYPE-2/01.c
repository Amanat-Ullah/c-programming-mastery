// Function: int get_five(void)
// Returns: 5
// Main: Call it and print "Returned value: 5"

#include<stdio.h>

int get_five()
{   
    int num;
    printf("Enter the number:");
    scanf(" %d", &num);
    return num;
}

int main()
{
    int number = get_five();
    printf("The returned number is: %d", number);
    return 0;
}
