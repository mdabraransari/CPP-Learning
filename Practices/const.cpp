#include <iostream>
#include <cmath>
using namespace std;

constexpr double  square(double x) {
    return x * x;
}

int main() {

   const int dmv = 17;
   int var = 17;
   cout << dmv << "\n";
   constexpr double max1 = 1.4*square(dmv);
   cout << max1;
//    constexpr double max2 = 1.4*square(var); // error 
   const double max3 = 1.4*square(var); // runtime
   cout << "\n" << max3;


   return 0;
}