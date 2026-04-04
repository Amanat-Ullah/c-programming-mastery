// Read: name (string), age (int), height (float)
// Print in a formatted sentence
// Example: "John is 25 years old and 5.9 feet tall"

#include<stdio.h>
int main()
{
    char name[20]; int age; float height;
    printf("Entering information: \nName | Age | Height: ");
    scanf(" %19s %d %f", &name, &age, &height);
    printf("%s is %d years old and %.1f feet tall", name,age,height);

    return 0;
}