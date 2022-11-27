#include <iostream>
#include <math.h>
#include <cmath>


using namespace std;

int main()
{
    /// Exponents and Roots
    /// Exponents are used to raise a number to a power
    /// Roots are used to find the square root of a number
    /// Exponents are written as a number followed by a caret and then the power
    /// Roots are written as a number followed by a caret and then the power
    int base = 16;
    int exponent = 2;
    int result_exponential = pow(base, exponent);
    int root = 2;
    float result_root = pow(base, 1.0/root);
    printf("the square root of %d is %f \n", base, result_root);
    //or
    float result_root_2 = sqrt(base);
    printf("the square root of %d is %f \n", result_root_2);
    return 0;
}