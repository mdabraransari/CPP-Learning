#include <iostream>
#include <cstdint>
#include <limits>
using namespace std;

int main() {

   int16_t x {0xaabb};
   int64_t xx {0xaaaabbbbccccdddd};
   int_least16_t y;
   int_least32_t yy;
   int_fast32_t z;
   cout << "size of int16_t "<< sizeof(int16_t) << endl;
   cout << "size of int16_t "<< sizeof(int64_t) << endl;
    cout << "largest int_least16_t == "<< numeric_limits<int_least16_t>::max() << '\n';


   return 0;
}