#include <math.h>
#include <iostream>
#include <string>
#include <list>
#include <iterator>

using namespace std;

float first_function(float x, float y)
{
    /// @brief      
    /// @param x 
    /// @param y 
    /// @return x*y
    // this is a function tha receives two floats numbers and return the multiplication of them

    return x + y;
}

list<double> sqrt_organize(float x)
{
    list<double>  sqrt_vector;
    sqrt_vector.push_back(sqrt(x));
    sqrt_vector.push_back(-sqrt(x));
    return sqrt_vector;
}

int main()
{
    printf("Hello World \n");
    int a = 1;
    int b = 2;
    float result = first_function(a, b);
    printf("The result 1 is: %f \n", result);

    float square_y = 36;
    list<double> result_2 = sqrt_organize(square_y);
    for( auto it = result_2.begin(); it != result_2.end(); ++it )
    {
        printf("The result 2 is: %f \n", *it);
    }
    return 0;
}