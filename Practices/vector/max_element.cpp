#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
   vector<int> vec = {3, 4, 56, 67};
   int max_value = *max_element(vec.begin(), vec.end());
   cout << "Max Value: " << max_value << endl;
   return 0;
}