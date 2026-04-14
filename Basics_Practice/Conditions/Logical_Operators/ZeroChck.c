/*
Take a number:

If number is NOT equal to 0 → print “Non-zero”
Else → “Zero”
*/
#include<stdio.h>
int main(){
    int number;
    printf("Enter number:");
    scanf("%d", &number);

    if(number!=0){
        printf("Non-zero");
    }
    else{
        printf("Zero");
    }
    return 0;
}