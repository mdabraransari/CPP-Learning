#include <iostream>
using namespace std;

int main() {
   string a = u8"The official vowels in Danish are: a, e, i, o, u, \u00E6, \u00F8, \u00E5 and y.";
   cout << a << endl;
   return 0;
}