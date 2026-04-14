/*
Take two numbers and an operator (+, -, *, /) and perform operation.
*/
#include<stdio.h>

int main(){
    char choice;
    int num1,num2,result;
    printf("Enter first number:");
    scanf("%d", &num1);

    printf("Perfom operation;\n1)*:\n2)/:\n3)+:\n4)-:");
    scanf(" %c", &choice);

    printf("\nEnter second number:");
    scanf("%d", &num2);
    
    if(choice=='*'){
        result=num1*num2;
    }
    else if(choice=='/'){
        result=num1/num2;
    }
    else if(choice=='+'){
        result=num1+num2;
    }
    else if(choice=='-'){
        result=num1-num2;
    }
    else {
    printf("Invalid operator!\n");
    return 1;  // Exit with error
    }

    printf("Answer=%d", result);
return 0;
}