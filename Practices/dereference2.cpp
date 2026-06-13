#include <iostream>
using namespace std;

int main() {
    int a = 10;
    int* ptr = &a;
    int** parPtr = &ptr;
    cout << parPtr << endl;
    cout << *(parPtr) << endl;
    cout << (ptr) << endl;
    cout << **(parPtr) << endl; //double dereference
   return 0;
}