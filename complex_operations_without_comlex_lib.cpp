#include <iostream>
#include <cmath>
#include <iomanip>

struct Complex {
    double real, imag;
};

// Function to display complex numbers
void displayComplex(Complex c, const std::string& label) {
    std::cout << label << ": (" << c.real << "," << c.imag << ")\n";
}

double magnitude(Complex c) {
    return sqrt(c.real * c.real + c.imag * c.imag);
}

double angle(Complex c) {
    return atan2(c.imag, c.real);
}

Complex toPolar(Complex c) {
    Complex polar;
    polar.real = magnitude(c);
    polar.imag = angle(c);
    return polar;
}

Complex fromPolar(Complex polar) {
    Complex result;
    result.real = polar.real * cos(polar.imag);
    result.imag = polar.real * sin(polar.imag);
    return result;
}

Complex add(Complex a, Complex b) {
    Complex result;
    result.real = a.real + b.real;
    result.imag = a.imag + b.imag;
    return result;
}

Complex subtract(Complex a, Complex b) {
    Complex result;
    result.real = a.real - b.real;
    result.imag = a.imag - b.imag;
    return result;
}

Complex multiply(Complex a, Complex b) {
    Complex result;
    result.real = a.real * b.real - a.imag * b.imag;
    result.imag = a.real * b.imag + a.imag * b.real;
    return result;
}

Complex divide(Complex a, Complex b) {
    Complex result;
    double denominator = b.real * b.real + b.imag * b.imag;
    result.real = (a.real * b.real + a.imag * b.imag) / denominator;
    result.imag = (a.imag * b.real - a.real * b.imag) / denominator;
    return result;
}

int main() {
    Complex num1 = {3, 4}; // 3 + 4i
    Complex num2 = {1, -2}; // 1 - 2i

    // Display original complex numbers
    displayComplex(num1, "Num1");
    displayComplex(num2, "Num2");

    // Basic arithmetic operations
    Complex sum = add(num1, num2);
    Complex difference = subtract(num1, num2);
    Complex product = multiply(num1, num2);
    Complex quotient = divide(num1, num2);

    // Display results
    displayComplex(sum, "Sum");
    displayComplex(difference, "Difference");
    displayComplex(product, "Product");
    displayComplex(quotient, "Quotient");

    // Convert to polar form
    Complex polarForm = toPolar(num1);

    // Display polar form
    displayComplex(polarForm, "Polar Form");

    // Convert back to rectangular form
    Complex backToRectangular = fromPolar(polarForm);

    // Display back to rectangular form
    displayComplex(backToRectangular, "Back to Rectangular");

    return 0;
}
