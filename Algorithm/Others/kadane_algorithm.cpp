#include <iostream>
#include <climits>
using namespace std;

int main() {
   int arr[] = {1, -2, -3, 4, 5};
   int n = 5;
   int current_sum = 0;
   int max_sum = INT_MIN;

   for(int i = 0; i < n; i++){
    current_sum += arr[i];
    max_sum = max(max_sum, current_sum);

    if(current_sum < 0){
        current_sum = 0;
    }
   }
   cout << "Maximum Subarray Sum = " << max_sum << endl;
   return 0;
}