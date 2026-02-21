#include <iostream>
using namespace std;

template <typename T>
T maximum(T a, T b){
    return (a > b) ? a : b;
}

int main() {
    cout << maximum(10, 4) << endl;
    cout << maximum(3.2, 4.2) << endl;
   return 0;
}