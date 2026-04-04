// Input a float/double and print it with:
// - 2 decimal places
// - 5 decimal places
// - scientific notation

#include<stdio.h>

int main()
{   
    float input;
    printf("Enter a float/double to print:");
    scanf(" %f", &input);                                    //%.2f: For 2 decimal places
    printf("\nPrinting with 2 decimal places: %.2f", input);
    printf("\nPrinting with 5 decimal places: %.5f", input); // Accuracy of float is lost as can be seen in output
    printf("\nPrinting with 5 decimal places in double: %lf", input); //Output is more accurate
    printf("\nPrinting scientific notaion: %e", input);

    return 0;
}