#include <iostream>
using namespace std;


void f(char c, signed char sc, unsigned char uc){
    char* pc = reinterpret_cast<char*>(&uc);
    signed char* psc = reinterpret_cast<signed char*>(pc);
    unsigned char* puc = reinterpret_cast<unsigned char*>(pc);
    psc = reinterpret_cast<signed char*>(puc);
}


int main() {
    char c = 'A';
    signed char sc = -65;
    unsigned char uc = 65;

    cout << "char: " << c << '\n';
    cout << "signed char: " << static_cast<int>(sc) << '\n';
    cout << "unsigned char: " << static_cast<int>(uc) << '\n';

    f(c, sc, uc);

    return 0;
}
