/*
Input:

Age
Membership (1 = yes, 0 = no)

Condition:

Discount if:
Age ≥ 60 OR
Member == 1
*/
#include<stdio.h>
int main(){
    int Age, Membership;
    printf("Enter your Age:");
    scanf("%d", &Age);

    printf("Enter membership status:");
    scanf("%d", &Membership);

    if(Membership==1 || Age>=60){
        printf("Eligible for Discount!");
    }
    else{
        printf("Not eligible!");
    }
    return 0;
}