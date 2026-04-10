
/*
Single Flag / Boolean Check
If a variable isOn = 1, print “ON”.
If isOn = 0, do nothing.

Concept: Embedded-like simple flag
*/
#include<stdio.h>
int check(int isOn){
    if(isOn!=0){
        printf("ON");
    }
    else{
        printf("Skipping...");
    }
}

int main(){
    int flag;
    printf("Swtch:");
    scanf("%d", &flag);
    check(flag);
}