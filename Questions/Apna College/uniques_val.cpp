#include <iostream>
using namespace std;

int main() {
    int nums[] = {1,2,3,1,2,3,4};
    int size = sizeof(nums) / sizeof(nums[0]);
    int unique = 0;

    for(int i = 0; i < size; i++) {
        unique = unique ^ nums[i];
    }

    cout << "Unique number is: " << unique << endl;


   return 0;
}
