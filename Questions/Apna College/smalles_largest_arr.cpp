#include <bits/stdc++.h>
using namespace std;

int main(){
    int nums [] = {5,15,87,22,1,-15,-24};
    int size = 7;
    int smallest = INT_MAX;
    int largest = INT_MIN;
    int index1;
    int index2;

    for(int i = 0; i < size; i++){
        if(nums[i] < smallest){
            smallest = nums[i];
             index1 = i;
        }
       
        // smallest = min(nums[i], smallest);
        // largest = max(nums[i], largest);
    }
    for(int i = 0; i < size; i++){
        if(nums[i] > largest){
            largest = nums[i];
             index2 = i;
        }
       
        // smallest = min(nums[i], smallest);
        // largest = max(nums[i], largest);
    }

    cout << " Index of smallest: " << smallest << " is " <<  index1 << endl;
    cout << "Index of largest: " << largest << " is " << index2 << endl;
}
