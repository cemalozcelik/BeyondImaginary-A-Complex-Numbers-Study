#include <iostream>
#include <complex>
#include <cmath>

// Define a complex function
std::complex<double> complexFunction(const std::complex<double>& z) {
    return std::sin(z) + std::cos(z);
}

// Calculate the derivative of a complex function at a given point
std::complex<double> complexDerivative(const std::complex<double>& z) {
    const double h = 1e-6; // Small step size
    return (complexFunction(z + h) - complexFunction(z)) / h;
}

// Calculate the integral of a complex function over a specified interval
std::complex<double> complexIntegral(double start, double end) {
    const int numSteps = 1000; // Number of steps for numerical integration
    const double stepSize = (end - start) / numSteps;

    std::complex<double> result = 0.0;

    for (int i = 0; i < numSteps; ++i) {
        double x = start + i * stepSize;
        result += complexFunction(x) * stepSize;
    }

    return result;
}

int main() {
    std::complex<double> z1(3.0, 4.0);  // 3 + 4i

    // Derivative
    std::complex<double> derivative = complexDerivative(z1);
    std::cout << "Derivative of the complex function at z1: " << derivative << std::endl;

    // Integral over the interval [0, 1]
    std::complex<double> integralResult = complexIntegral(0.0, 1.0);
    std::cout << "Integral of the complex function over [0, 1]: " << integralResult << std::endl;

    return 0;
}
