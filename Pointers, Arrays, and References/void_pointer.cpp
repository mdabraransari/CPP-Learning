#include <iostream>
using namespace std;


void f(int* pi)
{
    void* pv = pi;
    *pv;
    ++pv;

    int* pi2 = static_cast<int*>(pv);

    double* pd1 = pv;
    double* pd2 = pi;
    double* pd3 = static_cast<double*>(pv);
}


int main() {
   return 0;
}