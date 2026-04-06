/*
Write a function that takes an integer x and returns x³ + 2x² - 5x + 7.
Function name: polynomial 
*/
#include<stdio.h>
int polynomial(int x)
{
    return (x*x*x)+(2*x*x)-(5*x)+7;
}
int main()
{
    printf("For input value of x polynomial=%d", polynomial(2));
}