/*
Enter your name: John
Enter your age: 25
Enter your height (cm): 175.5
Enter your favorite character: A

--- Your Profile ---
Name: John
Age: 25
Height: 175.50 cm
Favorite character: A
*/

#include<stdio.h>
int main()
{
    char name[5];
    int age;

    printf("Enter your name:");
    scanf(" %4s", name);
    
    printf("Enter your age:");
    scanf(" %d", &age);

    float height;
    printf("Enter your height:");
    scanf(" %f", &height);

    char FavChar;
    printf("Enter your favorite character:");
    scanf(" %c", &FavChar);

    printf("\n--- Your Profile ---");
    printf("\nName:%4s\n",name);
    printf("Age:%d\n",age);
    printf("Height:%.1f cm\n",height);
    printf("Favorite character:%c\n\n",FavChar);

    return 0;
}

