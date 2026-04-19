/*
Input:

marks
test score

Logic:

If marks ≥ 60
If test ≥ 70 → Eligible
Else → Not eligible
Else
If marks ≥ 50 → “Waiting list”
Else → Rejected
*/
#include<stdio.h>
int main(){
    int marks,testScore;
    printf("Enter marks: ");
    scanf("%d", &marks);

    printf("Enter test score: ");
    scanf("%d", &testScore);

    if(marks>=60){
        if(testScore>=70){
            printf("Eligible!");
        }
        else{
            printf("Not eligible!");
        }
    }
    else if(marks>=50){
        printf("Waiting list");
    }
    else{
        printf("Not eligible");
    }
    return 0;
}