// Ask for two integers and print their sum
// Input: 5 10
// Output: "Sum: 15"

#include<stdio.h>

int main()
{
    int No_1,No_2;
    printf("Enter two numbers to add: Input=");
    scanf(" %d%d", &No_1,&No_2);
    int sum=No_1+No_2;
    printf("Sum:%d", sum);

    return 0;
}