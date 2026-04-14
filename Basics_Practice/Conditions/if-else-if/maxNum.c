/*
Take 3 numbers and print the largest.
*/
#include<stdio.h>
int maxNum(int n1, int n2, int n3){
    if(n1>n2 && n1>3){
        return n1;
    }
    else if(n2>n1 && n2>n3){
        return n2;
    }
    else if(n3>1 && n3>2){
        return n3;
    }
    else{
    }
    return 0;
}

int main(){
    int nm1, nm2, nm3;
    printf("Enter input:"); 
    scanf("%d%d%d", &nm1,&nm2,&nm3);
    printf("The largest number is: %d",maxNum(nm1,nm2,nm3));
    return 0;
}