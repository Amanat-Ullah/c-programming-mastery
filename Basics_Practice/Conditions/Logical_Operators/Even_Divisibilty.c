/*
Take a number and check:
      If number is even AND divisible by 5 → print “Valid”
      Else → “Invalid”
*/
#include<stdio.h>
int main(){
    int number;
    printf("Enter a number:");
    scanf("%d", &number);

    if(number%2==0 && number%5==0){
        printf("Valid");
    }
    else{
        printf("Invalid");
    }
    return 0;
}