/*
Write a program that takes marks in Math and Physics.

Condition:

Pass only if both ≥ 50
Otherwise → Fail
*/
#include<stdio.h>
void passFail(int mth, int phy){
    if(mth>=50 && phy>=50){
        printf("Pass!");
    }
    else{
        printf("Fail!");
    }
}

int main(){
    int Math_marks, Phy_marks;
    printf("Enter Math marks:");
    scanf("%d", &Math_marks);

    printf("Enter Physics marks:");
    scanf("%d", &Phy_marks);
    
    passFail(Math_marks, Phy_marks);
    
    return 0;
}