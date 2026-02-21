#include <iostream>
using namespace std;

template <typename T>
T add(T a, T b){
    return a + b;
}

int main() {
    cout << add(2,3) << endl;
    cout << add(2.9, 9.2);
   return 0;
}