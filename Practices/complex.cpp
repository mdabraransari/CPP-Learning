#include <iostream>
#include <complex>
using namespace std;

int main() {

   complex<double> z(1, 4);
   cout << "Complex Number:\n";
   cout << "Real: " << z.real() << endl;
   cout << "Imaginary: " << z.imag() << endl;

   return 0;
}