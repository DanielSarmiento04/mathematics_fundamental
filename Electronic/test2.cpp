#include <iostream>
#include <list>
#include <math.h>

using namespace std;

// Declare the functions
double average_voltage_half_wave(float voltage);
double average_voltage_full_wave(float voltage);

int main()
{
    // Create a list and initialize it initializer_list of 7 elements
    int vector[4] = {5, 100, 10, 40};
    // for (int value : vector)
    // {
    //     double avg_full = average_voltage_full_wave(value);
    //     // printf("The average voltage of %d is %.2f (full)\n",value, avg_full);
    // }

    double full_wave = average_voltage_full_wave(40) - 15;
    printf("The average voltage is %.2f (half)\n", full_wave);

    // double voltage = 200;                 // Voltage [v]
    // double resp = (200 - 0.7) * M_PI / 2; // Voltage [v]
    // resp = resp *2 +4.8;
    // resp  =resp /4;
    // printf("The average voltage is %.2f (half)\n", resp);

    double voltaje = 50;
    double resp = voltaje * M_PI / 2 ;
    printf("The average voltage is %.2f (half)\n", resp);

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