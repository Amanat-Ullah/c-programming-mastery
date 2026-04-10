/*
Basic Comparison
Check if a number is positive.
Check if a number is negative.
Check if a number is zero.

Concept: Simple if with single condition
*/
#include<stdio.h>
int BasicComparison(int number){
    if (number>0){
        printf("Number is Positive!");
    }
    if(number==0){
        printf("Number is Zero!");
    }
    if(number<0){
        printf("Number is Negative!");
    }
}

int main(){
    BasicComparison(-1);
    return 0;
}
