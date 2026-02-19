#include <iostream>
using namespace std;

int main() {
    int&& r = 10;
    cout << r << endl;

    r = 20;
    cout << r << endl;

    return 0;
}