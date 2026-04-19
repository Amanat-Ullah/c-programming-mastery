/*
Input:

choice

Logic:

If choice == 1
If subchoice == 1 → Option A
Else → Option B
Else if choice == 2
If subchoice == 1 → Option C
Else → Option D
Else → Invalid
*/
#include<stdio.h>
int main(){
    int choice,subchoice;
    printf("Enter choice: ");
    scanf("%d", &choice);

    printf("Enter subchoice: ");
    scanf("%d", &subchoice);

    if(choice==1){
        if(subchoice==1){
            printf("Option A");
        }
        else{
            printf("option B");
        }
    }
    else if(choice==2){
        if(subchoice==1){
            printf("Option C");
        }
        else{
            printf("Option D");
        }
    }
    else{
        printf("Invalid");
    }
    return 0;
}