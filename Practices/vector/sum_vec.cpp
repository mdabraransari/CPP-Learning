#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
using namespace std;

int main() {
    vector<int> vec = { 1, 3, 5, 8, 9};
    int sum  = accumulate(vec.begin(), vec.end(), 0);
    cout << "Sum: " << sum;
   return 0;
}