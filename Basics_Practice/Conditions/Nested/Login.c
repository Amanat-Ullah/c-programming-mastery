/*
Input:

username
password

Logic:

If username correct
Then check password
Else → “Invalid username”
*/
#include<stdio.h>
#include<string.h>

int main(){
    char username[20]="Amanat";
    int password=12345;

    char usr[20];
    int pass;
    printf("Enter username: ");
    scanf(" %s", usr);

    if(strcmp(username,usr)==0){
        printf("Enter password:");
        scanf("%d", &pass);
        if(pass==password){
          printf("Correct password");
        }
        else{
            printf("Invalid Password!");
        }
    }
    else{
        printf("Invalid username!");
    }
    return 0;
}