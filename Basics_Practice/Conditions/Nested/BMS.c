/*
Input:

voltage

Logic:

If voltage > 0
If voltage < 3.3 → “Shutdown system”
Else
If voltage > 4.2 → “Overcharge warning”
Else → “Normal operation”
Else → “Battery disconnected”
*/
#include<stdio.h>
int main(){
    double voltage;
    printf("Enter voltage: ");
    scanf("%lf", &voltage);

    if(voltage>0){
        if(voltage<3.3){
            printf("Shutdown system");
        }
        else if(voltage>4.2){
            printf("Overcharge warning");
        }
        else{
            printf("Normal operation");
        }
    }
    else{
        printf("Battery disconnected");
    }
    return 0;
}