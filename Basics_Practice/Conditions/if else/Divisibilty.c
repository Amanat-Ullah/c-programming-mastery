/*
Divisibility Check
Check if a number is divisible by 3.
Check if a number is divisible by 5.

Concept: Single condition with modulo
*/

#include<stdio.h>
int Divisibility(int number){
    if(number%3==0 && number%5==0){
        printf("Divisible by both 3 and 5.");
    }
    
    else if(number%3==0){
        printf("Divisble by 3!");
    }
    else if(number%5==0){
        printf("Divisble by 5!");
    }
    else {
        printf("Divisible by none of these!"); 
    }
      
    return 0;
    }
int main(){
    int num;
    printf("Enter the number to check:");
    scanf("%d", &num);
    Divisibility(num);
    return 0;
}