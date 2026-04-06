/*
 * Write a function that takes two integers and returns their integer average.
 * Function name: average
 */
 #include<stdio.h>
 int average(int num1,int num2)
 {
    return (num1+num2)/2;
 }
 int main()
 {
  printf("Average of your inputs is:%d",average(5,3));
 }