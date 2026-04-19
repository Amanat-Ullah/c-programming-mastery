/*
nput:

temp_sensor (0/1)
smoke_sensor (0/1)

Logic:

If temp_sensor ON
If smoke_sensor ON → “Fire detected”
Else → “High temperature only”
Else
If smoke_sensor ON → “Smoke detected”
Else → “Safe”
*/
#include<stdio.h>
int main(){
    int temp_sensor,smoke_sensor;

    printf("Enter Temperature value: ");
    scanf("%d", &temp_sensor);

    printf("Enter smoke sensor value: ");
    scanf("%d", &smoke_sensor);

    if(temp_sensor==1){
        if(smoke_sensor==1){
            printf("Fire Detected!");
        }
        else{
            printf("Hight temperature only");
        }
    }
    else if(smoke_sensor==1){
        printf("Smoke detected!");
    }
    else{
        printf("Safe");
    }
    return 0;
}