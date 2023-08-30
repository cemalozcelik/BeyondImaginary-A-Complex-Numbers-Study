#include <iostream>
#include <complex>

int main() {
    // Creating complex numbers
    std::complex<double> z1(3.0, 4.0);  // 3 + 4i
    std::complex<double> z2(-2.0, 1.5); // -2 + 1.5i

    // Displaying complex numbers
    std::cout << "z1 = " << z1 << std::endl;
    std::cout << "z2 = " << z2 << std::endl;

    // Basic arithmetic operations
    std::complex<double> sum = z1 + z2;
    std::complex<double> difference = z1 - z2;
    std::complex<double> product = z1 * z2;
    std::complex<double> quotient = z1 / z2;

    std::cout << "Sum: " << sum << std::endl;
    std::cout << "Difference: " << difference << std::endl;
    std::cout << "Product: " << product << std::endl;
    std::cout << "Quotient: " << quotient << std::endl;

    // Getting real and imaginary parts
    double realPart = z1.real();
    double imagPart = z1.imag();
    std::cout << "Real part of z1: " << realPart << std::endl;
    std::cout << "Imaginary part of z1: " << imagPart << std::endl;

    // Complex conjugate
    std::complex<double> conjugate = std::conj(z1);
    std::cout << "Conjugate of z1: " << conjugate << std::endl;

    // Magnitude and phase (polar form)
    double magnitude = std::abs(z1);
    double phase = std::arg(z1);
    std::cout << "Magnitude of z1: " << magnitude << std::endl;
    std::cout << "Phase of z1: " << phase << " radians" << std::endl;

    return 0;
}
