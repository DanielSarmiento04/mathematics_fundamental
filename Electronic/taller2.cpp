#include<math.h>
#include<iostream>
#include <cmath>

using namespace std;

double current(double voltage, double resistance) {
    return voltage / resistance;
}

int main()
{
    float voltaje = 49.3; // Voltaje
    float resistencia = 3.3; // Resistencia
    double corriente = current(voltaje, resistencia);
    printf("La corriente es: %.2f", corriente);
    cout << endl;
    double resp = 120/5;
    printf("La voltaje es: %.2f", resp);
    return 0;
}