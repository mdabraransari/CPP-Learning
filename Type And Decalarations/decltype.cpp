#include <iostream>
using namespace std;

int main(){
    int x = 10;
    decltype(x) y = 20;

    cout << y << endl;
}
// x is int
// therefore decltype(x) becomes int
// so y is also int