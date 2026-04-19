/*
Input:
balance
amount
Logic:

If balance > 0
If amount ≤ balance
If amount % 500 == 0 → “Withdraw successful”
Else → “Invalid denomination”
Else → “Insufficient balance”
Else → “Account empty”
*/
#include<stdio.h>
int main(){
    int amount, balance;
    printf("Enter balance: ");
    scanf("%d", &balance);

    printf("Enter Amount: ");
    scanf("%d", &amount);


    if(balance>0){
        if(amount<=balance){
            if(amount%500==0){
                printf("Withdraw successful!");
            }
            else{
                printf("invalid denomination!");
            }
        }
        else{
        printf("Insufficient Balance");
        }
    }
    else{
    printf("Account empty!");
    }
   return 0;
}