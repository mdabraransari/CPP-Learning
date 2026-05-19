#include <iostream>
using namespace std;

int main() {
    auto ac = alignof('c');
    auto ai = alignof(1);
    auto ad = alignof(2.0);
    cout << ac << endl;
    cout << ai << endl;
    cout << ad;
   return 0;
}