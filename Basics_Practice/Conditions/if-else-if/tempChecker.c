/*
Take temperature as input and print:

Above 40 → “Very Hot”
30–40 → “Hot”
20–29 → “Normal”
10–19 → “Cold”
Below 10 → “Very Cold”
*/
#include<stdio.h>
int temp(int check){
    if(check>=40){
        printf("Anomaly!\n Do not go outside.");
    }
    else if(check>=30){
        printf("Hot");
    }
    else if(check>=20){
        printf("Normal");
    }
    else if(check>=10){
        printf("Cold");
    }
    else if(check>=0){
        printf("Very cold");
    }
    else if(check<0){
        printf("Freezing!\n Do not go outside");
    }
}

int main(){
    int tempChk;
    printf("Enter the temperature:");
    scanf("%d", &tempChk);
    temp(tempChk);
}