#include <stdint.h>
#include <iostream>
using namespace std;

// Declare a class
int Sum(int a, int b);
int Substract(int a, int b);
int multiply(int a, int b);
float divide(int a, int b);

int main()
{
    // Declare int variable
    float a = 10;
    float b = 20;
    // Call a function
    int sum = Sum(a, b);
    // Print the result
    cout << "Sum of " << a << " and " << b << " is " << sum << endl;

    int substraction = Substract(a, b);
    cout << "Substraction of " << a << " and " << b << " is " << substraction << endl;

    int multiplication = multiply(a, b);
    cout << "Multiplication of " << a << " and " << b << " is " << multiplication << endl;

    double division = divide(a, b);
    cout << "Division of " << a << " and " << b << " is " << division << endl;

    return 0;
}

// Example how you create a function
int Sum(int a, int b)
{
    // This function receive two integer number and return the sum of them
    return a + b;
}

int Substract(int a, int b)
{
    // This function receive two integer number and return the substract of them
    return a - b;
}

int multiply(int a, int b)
{
    // This function receive two integer number and return the multiply of them
    return a * b;
}

float divide(int a, int b)
{
    // This function receive two integer number and return the divide of them
    // For save in memory the decimal part, we use float
    double result = (double) a / b;
    return result;
}