#include <iostream>
using namespace std;

// Function to calculate the power of a number
double power(double n, int p = 2) {
    double result = 1.0;

    // Calculate n^p or n to the power p
    for (int i = 0; i < p; i++) {
        result *= n;
    }

    return result;
}

int main() {
    double base;
    int exponent;

    // user input for base and exponent
    cout << "Enter the base (n): ";
    cin >> base;
    cout << "Enter the exponent (p): ";
    cin >> exponent;

    // Call the power function and display the result
    double result = power(base, exponent);
    cout << base << " to the power " << exponent << " is = " << result << endl;

    return 0;
}
