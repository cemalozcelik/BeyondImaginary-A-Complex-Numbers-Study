#include <iostream>
#include <complex>
#include <cmath>

int main() {
    std::complex<double> z1(3.0, 4.0);  // 3 + 4i

    // Euler's formula
    std::complex<double> eulerResult = std::exp(std::complex<double>(0, 1) * z1);
    std::cout << "Euler's formula result: " << eulerResult << std::endl;

    // De Moivre's theorem
    int n = 3; // power
    std::complex<double> deMoivreResult = std::pow(z1, n);
    std::cout << "De Moivre's theorem (z1^n) result: " << deMoivreResult << std::endl;

    // Exponential form and trigonometric form
    double theta = std::arg(z1);
    double r = std::abs(z1);
    std::cout << "Exponential form: " << r << " * exp(i * " << theta << ")" << std::endl;
    std::cout << "Trigonometric form: " << r << " * (cos(" << theta << ") + i * sin(" << theta << "))" << std::endl;

    return 0;
}
