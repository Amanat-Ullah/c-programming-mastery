/*
Take a number:

If number is between 10 and 50 → print “In range”
Else → “Out of range”
*/
#include<stdio.h>
int main(){
    int number;
    printf("Enter number");
    scanf("%d", &number);

    if(number>10 && number<50){
        printf("In range");
    }
    else{
        printf("Out of range");
    }
}