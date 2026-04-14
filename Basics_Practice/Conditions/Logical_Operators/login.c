/*
Input:
     Username (integer)
     Password (integer)
Condition:
          If both match predefined values → “Login Successful”
          Else → “Invalid”
*/
#include<stdio.h>

#include<stdio.h>

void login(int usr, int psswd){
    int username = 12345;  // Predefined numeric username
    int password = 123;
    
    if(usr == username && psswd == password){
        printf("Login successful!");
    }
    else{
        printf("Invalid username or password!");
    }
}

int main(){
    int Username, Password;
    
    printf("Enter username: ");
    scanf("%d", &Username);
    
    printf("Enter password: ");
    scanf("%d", &Password);
    
    login(Username, Password);
    return 0;
}