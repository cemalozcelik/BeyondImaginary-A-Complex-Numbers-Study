#include <iostream>
#include <complex>
#include <cmath>

// Define a complex impedance for a resistor
std::complex<double> resistorImpedance(double resistance) {
    return std::complex<double>(resistance, 0.0);
}

// Define a complex impedance for a capacitor
std::complex<double> capacitorImpedance(double capacitance, double frequency) {
    double angularFrequency = 2.0 * M_PI * frequency;
    return std::complex<double>(0.0, -1.0 / (angularFrequency * capacitance));
}

// Define a complex impedance for an inductor
std::complex<double> inductorImpedance(double inductance, double frequency) {
    double angularFrequency = 2.0 * M_PI * frequency;
    return std::complex<double>(0.0, angularFrequency * inductance);
}

int main() {
    // Electrical components
    double resistorValue = 100.0;       // Ohms
    double capacitorValue = 1.0e-6;     // Farads
    double inductorValue = 0.1;         // Henrys

    // AC circuit parameters
    double frequency = 1000.0;          // Hertz

    // Impedance calculations
    std::complex<double> resistorZ = resistorImpedance(resistorValue);
    std::complex<double> capacitorZ = capacitorImpedance(capacitorValue, frequency);
    std::complex<double> inductorZ = inductorImpedance(inductorValue, frequency);

    // Total impedance in a series AC circuit
    std::complex<double> totalImpedance = resistorZ + capacitorZ + inductorZ;

    // Display results
    std::cout << "Resistor Impedance: " << resistorZ << " Ohms" << std::endl;
    std::cout << "Capacitor Impedance: " << capacitorZ << " Ohms" << std::endl;
    std::cout << "Inductor Impedance: " << inductorZ << " Ohms" << std::endl;
    std::cout << "Total Impedance in Series Circuit: " << totalImpedance << " Ohms" << std::endl;

    return 0;
}
