#include <iostream>
#include <math.h>

using namespace std;

double average_voltage_half_wave(float voltage);
double average_voltage_full_wave(float voltage);

int main()
{
    // rectification middle
    float Vol = 15; // Voltage
    // Calculate the average voltage
    // Divide the voltage by pi
    float avg_half = average_voltage_half_wave(Vol);
    // Round the average voltage to the nearest integer
    cout << "The average voltage is " << avg_half << " (half)" <<endl;
    // porcentaje
    float porc = (avg_half * 100) / Vol;
    cout << "The percentage is " << porc << endl;

    // Calculate the real voltage
    float real = Vol - 0.7;
    cout << "The real voltage is " << real << endl;

    // calculate the average voltage for full wave rectification
    float avg_full = average_voltage_full_wave(Vol);
    printf("The average voltage is %.2f (full)\n", avg_full);
    // porcentaje
    porc = (avg_full * 100) / Vol;
    cout << "The percentage is " << porc << endl;

    return 0;
}

double average_voltage_half_wave(float voltage)
{
    /// @brief Calculate the average voltage of a half wave rectifier
    /// @param voltage 
    /// @return  The average voltage
    return voltage / M_PI;
}

double average_voltage_full_wave(float voltage)
{
    /// @brief Calculate the average voltage of a full wave rectifier
    /// @param voltage 
    /// @return    The average voltage
    return 2 * average_voltage_half_wave(voltage);
}