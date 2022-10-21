#include <iostream>
#include <math.h>
using namespace std;

int empowerment(int a, int b);
double settlement(int base, int radical);

int main()
{
    // Declare int variable
    int a = 32;
    int b = 2;
    // Call a function
    int empower = empowerment(a, b);
    // Print the result
    cout << "Result of " << a << " and " << b << " is " << empower << endl;
    float settle = settlement(a, b);
    cout << "Result of " << a << " and " << b << " is " << settle << " (sttlement)" << endl;
    // Question: What is the result of the following code?
    float trye = pow(0, 0);
    cout << "Result of " << trye << endl;
    return 0;
}

int empowerment(int a, int b)
{
    // If you are studying Python, you can use pow() function to calculate the power of a number
    return pow(a, b);
}

double settlement(int base, int radical)
{
    // If you are studying Python, you can use pow() function to calculate the power of a number
    return pow(base, (float)1 / radical);
}