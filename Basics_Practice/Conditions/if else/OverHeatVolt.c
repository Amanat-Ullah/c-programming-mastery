/*
Simple Sensor Scenario
If temperature > 50, print “Overheated!”.
If voltage < 5, print “Low Voltage!”.

Concept: Realistic embedded-like scenario
*/
#include<stdio.h>
void check(int Temp, int volt){
    if(Temp>50){
        printf("Overheated!");
    }
    
    if(volt<5){
        printf("\nLow voltage!");
    }
      
}

int main(){
    int tempCheck,VoltCheck;
    printf("Enter value to check:");
    scanf("%d%d", &tempCheck,&VoltCheck);
    check(tempCheck,VoltCheck);
}