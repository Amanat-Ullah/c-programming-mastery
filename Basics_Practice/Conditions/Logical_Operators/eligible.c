/*
Input:
      Marks
      Entrance test score
Condition:
      Eligible if:
                 Marks ≥ 60 AND test ≥ 70
                            OR
                 Marks ≥ 80 (direct admission)
*/
#include<stdio.h>
void eligibilty(int mrks, int tstScr){
    if((mrks>=60 && tstScr >=70) || (mrks>=80)){
        printf("Eligible for Admission!");
    }
    else{
        printf("Not Eligible!");
    }
}

int main(){
    int marks, test_score;
    printf("Enter marks:");
    scanf("%d", &marks);

    printf("Enter test_score:");
    scanf("%d", &test_score);

    eligibilty(marks, test_score);
}