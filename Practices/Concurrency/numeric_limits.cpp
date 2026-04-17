#include <iostream>
#include <limits>
using namespace std;

int main() {
    cout << "Max int: " << numeric_limits<int>::max() << endl;
    cout << "Min int: " << numeric_limits<int>::min() << endl;
}