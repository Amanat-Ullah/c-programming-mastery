/*
Take marks:

If marks ≥ 50 → Pass
If marks ≥ 80 → “Distinction”
Else → Fail
*/

#include<stdio.h>
int main(){
    int marks;
    printf("Enter marks:");
    scanf("%d", &marks);

    if(marks>=50){
        if(marks>=80){
            printf("Distinction");
        }
        else{
        printf("pass");
    }
}
    else {
        printf("Fail");
    }

return 0; 
}