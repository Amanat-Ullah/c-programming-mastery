/*
Maximum of Two Numbers
Print the larger of two numbers.

Concept: Basic comparison, returns one value
*/
#include<stdio.h>
int maxNum(int number1,int number2){

    if(number1>number2){
        return number1;
    }
    if(number2>number1){
        return number2;
    }
    if(number1==number2){
        return printf("Both are equal!");
    }
}

int main(){
    int get_number1,get_number2;
    printf("Enter values to compare:");
    scanf("%d%d", &get_number1,&get_number2);
    printf("Greater number is:%d",maxNum(get_number1,get_number2));
}