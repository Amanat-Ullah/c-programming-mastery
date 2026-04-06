/*
 Write a function that takes two integers and returns their remainder 
 (modulus) when the first is divided by the second.
 Function name: remainder
 Example: remainder(17, 5) → 2
 */
 #include<stdio.h>
 int Remainder(int num1, int num2)
 {
    return num1%num2;
 }

 int main()
 {
    printf("Remainder your inputs is:%d", Remainder(17,5));
 }