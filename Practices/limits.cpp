#include <limits>
#include <iostream>
using namespace std;

int main() {
	cout << numeric_limits<double>::min() << endl;
    cout << numeric_limits<int>::min() << endl;
    cout << numeric_limits<int>::max() << endl;
	return 0;
}
