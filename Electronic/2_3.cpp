#include <iostream>
#include <list>
#include <math.h>

using namespace std;

// Declare the functions
double average_voltage_half_wave(float voltage);
double average_voltage_full_wave(float voltage);

int main()
{
    // Define the primary volataje
    float voltage_primary = 120.0 * M_SQRT2;
    printf("The primary voltage is %f \n", voltage_primary);
    int number_turns_1 = 5;
    int number_turns_2 = 1;
    float relation = (float) number_turns_2 / number_turns_1;
    // Define the secondary voltage
    float voltage_secondary = voltage_primary * relation;
    printf("The secondary voltage is %f \n", voltage_secondary);
    float test = (voltage_secondary) - 1.4;

    printf("The primary voltage is %.2f", test);

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