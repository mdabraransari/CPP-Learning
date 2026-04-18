#include <iostream>
using namespace std;

// static_assert checks a condition at compile time.
// If the condition is false, compilation stops with the given message.
static_assert(4 <= sizeof(int), "size of int is too small!");

// More examples:
static_assert(sizeof(char) == 1, "A char must be 1 byte.");
static_assert(sizeof(double) >= sizeof(float), "double should not be smaller than float.");
int main() {
     char c2 = 1256;
     char c1 = 64;

   cout << "sizeof(int): " << sizeof(int) << '\n';
   cout << "static_assert checks were passed at compile time.\n";
   cout << c2 << '\n';
   cout << c1 << '\n';
   return 0;
}
