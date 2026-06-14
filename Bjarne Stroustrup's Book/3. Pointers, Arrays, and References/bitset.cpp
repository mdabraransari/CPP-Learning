#include <iostream>
#include <bitset>
using namespace std;

int main() {
   bitset<8> b;
   b[1] = 1;
   b[3] = 1;
   cout << b << endl;
   cout << b.count() << endl;
   
   return 0;
}