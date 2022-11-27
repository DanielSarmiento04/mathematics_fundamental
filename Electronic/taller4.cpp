#include <iostream>
#include <math.h>

using namespace std;

double get_value_by_percent(float value, float percent=0.0)
{
    return value * (percent);
}

void solve_6(void);
float solve_7(float emiter_current, float base_current);
float get_alpha(float colector_current, float base_current);

int main()
{
    // solve_6();
    // float resp = solve_7(5.34, 475e-3);
    // printf("Respuesta: %4f", resp);
    // float solve_7  = get_alpha(8.23, 8.69);

    float num = 5 - 0.7;
    float den = 10000;
    printf("Respuesta: %4f",  5/50e-3);
    return 0;
}


float get_alpha(float colector_current, float base_current)
{
    return colector_current / base_current;
}

void solve_6(void)
{
    int emiter_current = 30;
    float base_current = get_value_by_percent(emiter_current, 0.02);

    printf("Base current: %4f \n", base_current);

    float colector_current = get_value_by_percent(emiter_current, 0.98);

    printf("Colector current: %4f \n", colector_current);
    colector_current = emiter_current - base_current;
    printf("Colector current: %4f \n", colector_current);

}


float solve_7(float emiter_current, float base_current)
{
    float colector_current = emiter_current - base_current;
    return colector_current;
}
