/*
Input 3 sides:

Triangle is valid if:
sum of any 2 sides > third side
*/
#include<stdio.h>
int main(){
    int side1,side2,side3;
    printf("Enter three sides of tiangle:");
    scanf("%d%d%d", &side1,&side2,&side3);

    if((side1+side2>side3) && (side2+side3>side1) && (side1+side3>side2)){
        printf("Traingle is valid");
    }
    else{
        printf("Invalid");
    }
}