#include <iostream>
#include <math.h>

// Call the function libreary
using namespace std;

// Create the factorial function
long int factorial(int n)
{
    // Use short if statement to check if n is 0
    if (n == 0) return 1;

    else
    {
        printf("factorial(%d) = %d * factorial(%d) \n", n, n, n - 1);
        // Use recursion to call the function
        return n * factorial(n - 1);
    }
}

int main()
{
    // Declare the variable
    int factorial_number = 5;
    
    long int result = factorial(factorial_number);
    printf("The factorial of %d is %ld \n", factorial_number, result);
    return 0;
}