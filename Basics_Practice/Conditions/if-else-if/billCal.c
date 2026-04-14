/*
Units consumed:

0–100 → Rs 5/unit
101–200 → Rs 7/unit
201–300 → Rs 10/unit
Above 300 → Rs 12/unit

👉 Calculate total bill
*/
#include<stdio.h>
int billCal(int units){
    if(units>300){
       return units=units*12; 
        
    }
    else if(units>200){
       return units=units*10;
        
    }
    else if(units>100){
       return units=units*7;
    }
    else if(units>0){
       return units=units*5;
    }
    else{
        printf("Invalid Units!");
    }
}

int main(){
    int units;
    printf("Enter total units consumed:");
    scanf("%d", &units);
    printf("Total Bill= %d", billCal(units));
    return 0;
}