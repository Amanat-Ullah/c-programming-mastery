// Create a table with right-aligned columns:
// Name     Age  Score
// Alice     25   95.50
// Bob       30   87.25
// Use width specifiers (%10s, %5d, %8.2f)

#include<stdio.h>
int main()
{
    char name[20]= "Alice"; 
    int Age= 25; 
    float score= 95.50;
    printf("%10s %5s %8s\n","Name","Age","score");
    printf("%10s %5d %8.2f", name, Age, score);
    printf("\n%10s %5d %8.2f","Bob",30,87.25);
    return 0;
}