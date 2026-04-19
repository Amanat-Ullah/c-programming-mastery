/*
Input:

motion (0/1)
light level (0–100)

Logic:

If motion detected
If light < 30 → LED ON
Else → LED OFF
Else → LED OFF
*/
#include<stdio.h>
int main(){
    int motion;
    int light;
 
    printf("Enter motion: ");
    scanf("%d", &motion);

    printf("Enter Light level: ");
    scanf("%d", &light);
    if(motion==1){
        if(light<30){
            printf("LED ON");
        }
        else{
            printf("LED OFF");
        }
    }
    else{
        printf("LED OFF");
    }
    return 0;
}