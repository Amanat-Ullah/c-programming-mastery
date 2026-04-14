/*
Input:

Time (0–23)

Condition:

Shop is OPEN if:
Time is between 9 and 21

Otherwise CLOSED
*/
#include<stdio.h>
int main(){
    int time;
    printf("Check time:");
    scanf("%d", &time);

    if(time>=9 && time<=21){
        printf("Shop is OPEN");
    }
    else{
        printf("CLOSED");
    }
}