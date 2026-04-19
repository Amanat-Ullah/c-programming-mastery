/*
Take number:

If number ≥ 0
Check even or odd
Else
Print “Negative number”
*/
#include<stdio.h>
int main(){
    int number;
    printf("Enter number: ");
    scanf("%d", &number);

    if(number>0){
        if(number%2==0){
            printf("Even");
        }
        else{
            printf("Odd");
        }
    }
    else if(number==0){
        printf("Zero");
    }
    else{
        printf("Negative number ");
    }
    return 0;
}