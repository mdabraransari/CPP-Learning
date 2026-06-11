#include <iostream>
using namespace std;

#define PRINT_TYPE(T) cout << #T << " : " << sizeof(T) << "bytes" << endl;

int main() {
    cout << "\n+++++ INT FAMILY +++++" << endl;
    PRINT_TYPE(int);
    PRINT_TYPE(signed int);
    PRINT_TYPE(unsigned int);

    cout << "+++++ SHORT FAMILY +++++" << endl;
    PRINT_TYPE(short);
    PRINT_TYPE(short int);
    PRINT_TYPE(signed short);
    PRINT_TYPE(signed short int);
    PRINT_TYPE(unsigned short);
    PRINT_TYPE(unsigned short int);
    
    cout << "\n+++++ LONG LONG FAMILY +++++" << endl;
    PRINT_TYPE(long long);
    PRINT_TYPE(long long int);
    PRINT_TYPE(signed long long);
    PRINT_TYPE(signed long long int);
    PRINT_TYPE(unsigned long long);
    PRINT_TYPE(unsigned long long int);
   return 0;
}