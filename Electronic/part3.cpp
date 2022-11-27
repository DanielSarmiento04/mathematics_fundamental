#include <iostream>
#include <list>
#include <math.h>

using namespace std;

double calcule_v_ripple(double R, double C, double V);
double calculate_relation (double R, double C, double f);
double calculate_voltage_cd(double R, double C, double V);


int main()
{
    // float voltaje_cd = 75;
    // float voltaje_ripple = 0.5;
    float output_voltage = 36; // Voltage output
    output_voltage = output_voltage * M_SQRT2;
    printf("voltage %0.9f \n", output_voltage);
    output_voltage = output_voltage - 1.4;
    printf("voltage %0.9f \n", output_voltage);
    float capacitor_C = 100e-6;
    int resistence = 3.3e3;
    printf("Capacitor C: %.6f \n", capacitor_C);
    float v_ripple = calcule_v_ripple(resistence, capacitor_C, output_voltage);
    printf("V ripple: %.9f \n", v_ripple);
    float v_cd = calculate_voltage_cd(resistence, capacitor_C, output_voltage);
    printf("V cd: %.9f \n", v_cd);
    
    float relation = v_ripple / v_cd;
    printf("Relation: %f", relation);

    float regulation = ((15.5 - 14.9)/(14.9))*100;
    printf("Regulation: %.3f", regulation);
    return 0;
}

double calcule_v_ripple(double R, double C, double V)
{
    return (calculate_relation(R, C, 120)) * V;
}

double calculate_relation (double R, double C, double f)
{
    return (1/(f*R*C));
}
double calculate_voltage_cd(double R, double C, double V)
{
    return (1 - calculate_relation(R, C, 240)) * V;
}