#include<iostream>
#include<math.h>
using namespace std;

int empowerment(int a, int b);

int main()
{
    // Declare int variable
    int a = 10;
    int b = 20;
    // Call a function
    int result = empowerment(a, b);
    // Print the result
    cout << "Result of " << a << " and " << b << " is " << result << endl;
    return 0;
}

int empowerment(int a, int b)
{
    // If you are studying Python, you can use pow() function to calculate the power of a number 
    return pow(a, b);
}