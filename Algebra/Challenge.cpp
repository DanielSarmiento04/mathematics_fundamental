#include <iostream>
#include <math.h>
#include <cmath>


using namespace std;

float solve_equation(float root)
{
    // add try statement if there is not solution
    try
    {
        // multiply by 2 from the denominator
        double result = root * 2;
        result += 5;
        result /= 4;
        return result;
    }
    catch(const std::exception& e)
    {
        return NAN;
    }
}


int main()
{
    float right_statement_1 = sqrt(9);
    float result_1  = solve_equation(right_statement_1);
    float right_statement_2 = -sqrt(9);
    float result_2  = solve_equation(right_statement_2);
    printf("the result of the equation are %1f and %1f \n", result_1, result_2);
    return 0;
}