//No return, No paramter

// Create function: void system_init(void)
// Inside, print: "Initializing clocks..."
//              "Initializing GPIO..."
//              "System ready!"
// Call this function from main()

#include<stdio.h>

void system_init(void)
{
    printf("Initializing clocks...\nInitializing GPIO...\nSystem ready!");
}

int main()
{
    system_init();
    return 0;
}
