/*
Input a character:

If it is a vowel (a, e, i, o, u) → print “Vowel”
Else → “Consonant”
*/
#include<stdio.h>
int main(){
    char character;
    printf("Enter a character:");
    scanf("%c", &character);

    if(character=='a'||character=='A' || character=='e'|| character=='E'|| character=='i' || character=='I'|| character=='o' || character=='O'|| character=='u'|| character=='U'){
        printf("This is a vowel!");
    }
    else{
        printf("This is a non-vowel!");
    }
}