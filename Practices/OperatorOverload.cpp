#include <iostream>
class Complex {
    public:
       double real, imag;

       Complex(double r, double i) : real(r), imag(i) { }
};
Complex operator+(const Complex& a, const Complex& b)
{
    return Complex(a.real + b.real, 
                   a.imag + b.imag);
}
std::ostream& operator<<(std::ostream& os, const Complex& c)
{
    os << c.real << " + " << c.imag << "i";
    return os;
}
int main(){
    Complex c1(2, 3);
    Complex c2(4, 5);
    Complex c3 = c1 + c2;
    std::cout << c3;
}