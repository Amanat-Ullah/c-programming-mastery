/*Minimum of Two Numbers
Print the smaller of two numbers.

Concept: Slight variation of previous
*/

#include<stdio.h>
int minNum(int num1, int num2){
    if(num1<num2){
    return num1;
    }
    if(num2<num1){
    return num2;
    }
    return num1;
}
int main(){
    int get_num1,get_num2;
    printf("Enter the two numbers:");
    scanf("%d%d",&get_num1,&get_num2);
    
    if(get_num1==get_num2){
        printf("Both numbers are equal!");
    }
    else{
        printf("Smaller number is:%d",minNum(get_num1,get_num2));
    }
    return 0;
}
