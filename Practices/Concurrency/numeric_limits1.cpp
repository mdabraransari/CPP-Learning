#include <iostream>
#include <limits>
using namespace std;

int main() {
   cout << boolalpha;

   static_assert(numeric_limits<char>::is_signed, "unsigned characters!");
   static_assert(100000 < numeric_limits<int>::max(), "small ints!");

   cout << "Compile-time checks passed.\n";
   cout << "char is signed: " << numeric_limits<char>::is_signed << '\n';
   cout << "int min (lowest negative): " << numeric_limits<int>::min() << '\n';
   cout << "int max: " << numeric_limits<int>::max() << '\n';
   cout << "int digits (value bits): " << numeric_limits<int>::digits << '\n';
   cout << "int is exact: " << numeric_limits<int>::is_exact << '\n';
   return 0;
}
