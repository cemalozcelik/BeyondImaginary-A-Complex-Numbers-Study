#include <iostream>
#include <cmath>
#include <complex>
#include <iomanip>

int main() {
    // Creating complex numbers
    std::complex<double> num(3.0, 4.0); // 3 + 4i

    // Displaying original complex number
    std::cout << "Original Complex Number: " << num << std::endl;

    // Converting to polar form
    double magnitude = std::abs(num);
    double phase = std::arg(num);
    std::complex<double> polarForm = magnitude * std::exp(std::complex<double>(0, phase));

    // Displaying polar form
    std::cout << "Polar Form: " << "(" << magnitude << "," << phase << ")\n";

    // Converting back to rectangular form
    std::complex<double> backToRectangular = std::polar(magnitude, phase);

    // Displaying back to rectangular form
    std::cout << "Back to Rectangular: " << backToRectangular << std::endl;

    return 0;
}
