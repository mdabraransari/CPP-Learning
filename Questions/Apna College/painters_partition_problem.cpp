#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int min_time(vector<int>& arr, int n , int m){
    int max_value = *max_element(arr.begin(), arr.end());
    int start = max_value;
    
}

int main() {

   vector<int> arr = {40, 30, 10, 20};
   int n = 4, m = 2;
   cout << min_time(arr, n, m) << endl;
   return 0;
}