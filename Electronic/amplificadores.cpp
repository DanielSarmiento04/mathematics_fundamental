#include <iostream>
#include <math.h>

using namespace std;

float eficiencia(float R_i, float R_f)
{
    return (R_i + R_f)/R_i;
}

float get_R_f_cl_i(float R_i, float eficience)
{
    return -R_i*(eficience);
}
int main(void)
{
    float R_i = 4.7;
    float R_f = 100;
    float eficience = eficiencia(R_i, R_f);
    cout << "La eficiencia es: " << eficience << endl;
    
    R_i = 2.2;
    eficience = -100;
    string f = "La resistencia de realimentacion es: ";
    cout << f << get_R_f_cl_i(R_i, eficience) << endl;
    return 0;
}