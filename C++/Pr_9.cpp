#include <iostream> 

using namespace std; 

class Complex { 

public: 

int real, imaginary; 

Complex(int tempReal = 0, int tempImaginary = 0) { 

real = tempReal; 

imaginary = tempImaginary; 

} 

Complex addComp(Complex C1, Complex C2) { 

Complex temp; 

temp.real = C1.real + C2.real; 

temp.imaginary = C1.imaginary + C2.imaginary; 

return temp; 

} 

}; 

 

int main() { 

int real1, imaginary1, real2, imaginary2; 

cout << "Enter the real part of the first complex number:- "; 

cin >> real1; 

cout << "Enter the imaginary part of the first complex number:- "; 

cin >> imaginary1; 

cout << "Enter the real part of the second complex number:- "; 

cin >> real2; 

cout << "Enter the imaginary part of the second complex number:- "; 

cin >> imaginary2; 

 

Complex C1(real1, imaginary1); 

Complex C2(real2, imaginary2); 

cout << "Complex number 1:- " << C1.real << " + " << C1.imaginary << "i" << endl; 

cout << "Complex number 2:- " << C2.real << " + " << C2.imaginary << "i" << endl; 

Complex C3; 

C3 = C3.addComp(C1, C2); 

cout << "Sum of complex numbers:- " << C3.real << " + " << C3.imaginary << "i" << endl; 

return 0; 

} 