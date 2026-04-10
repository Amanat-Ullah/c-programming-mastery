/*Even / Odd Check
Check if a number is even.
Check if a number is odd.

Concept: % operator
*/
#include<stdio.h>
int isEven(int number){
    return(number%2==0);
}
int isOdd(int number){
    return(number%2!=0);
}

int main(){
    int num;
    printf("Enter the value to check:");
    scanf("%d", &num);

    if(isEven(num)){
        printf("Entered number is even!");
    }
    if(isOdd(num)){
            printf("Entered number is odd");
        }
    
    return 0;
}