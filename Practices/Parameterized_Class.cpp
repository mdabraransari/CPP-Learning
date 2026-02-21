#include <iostream>
using namespace std;

template <typename T>
class Box {
    T value;

 public:
     Box(T v){
        value = v;
     }
     void show() {
        cout << value << endl;
     }
};
int main() {
    Box<int> b1(10);
    Box<double> b2(3.14);
    Box<char> b3('A');

    b1.show();
    b2.show();
    b3.show();
}