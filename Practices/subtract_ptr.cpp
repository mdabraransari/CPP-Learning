#include <iostream>
using namespace std;

int main() {
    int* ptr2;
    int* ptr1 = ptr2 + 2;
    cout << ptr1 - ptr2 << endl;
   return 0;
}