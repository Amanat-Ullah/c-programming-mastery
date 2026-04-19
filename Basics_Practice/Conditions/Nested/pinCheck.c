/*
Assume:

int PORTA;

Logic:

If PORTA != 0
If bit 2 is HIGH → “Sensor active”
Else → “Sensor inactive”
Else → “No signal”
*/
#include<stdio.h>
int main(){
    int PORTA,bit2;
    printf("Enter port status: ");
    scanf("%d", &PORTA);

    printf("Enter bit status: ");
    scanf("%d", &bit2);

    if(PORTA!=0){
        if(bit2==1){
            printf("Sensor active");
        }
        else{
            printf("Sensor inactive");
        }
    }
    else{
        printf("No signal");
    }
    return 0;
}