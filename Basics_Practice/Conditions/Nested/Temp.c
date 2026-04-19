/*
Input: temperature

If temp > 0
If temp < 25 → “Heater ON”
Else
If temp > 35 → “Fan ON”
Else → “Normal”
Else → “System OFF (freezing)”
*/
#include<stdio.h>
int main(){
    int temp;
    printf("Enter Temp: ");
    scanf("%d", &temp);

    if(temp>0){
        if(temp<25){
            printf("Heater on!");
        }
        else{
            printf("Fan on!");
        }
    }
    else{
        printf("System off\n FREEZING!");
    }
    return 0;
}