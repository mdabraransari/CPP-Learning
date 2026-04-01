#include <iostream>
using namespace std;

int main(){
 
    int arr[] = {1,2,3,4,5};
    int n = 5;
    int target = 10;
    int left = 0 , right = n -1;
    bool found = false;
    while (left < right){
        int sum = arr[left] + arr[right];
        if(sum == target){
         cout << arr[left] << " " << arr[right];
         found = true;
         break;
        }
        else if(sum < target){
            left++;
        }
        else{
            right--;
        }
    }
    if(!found){
        cout << "Pair not found";
    }
}