#include <iostream>
#include <vector>
using namespace std;

int recursive_binary_search(vector<int> arr , int target , int st, int end ){
    int mid = st + (end - st)/2;
    if(target > arr[mid]){
        return recursive_binary_search(arr, target, mid + 1, end);
    } else if(target < arr[mid]){
        return recursive_binary_search(arr, target, st, mid - 1);
    } else {
        return mid;
    }
    return -1;

}
int main() {
    vector<int> arr1 = {-1, 0, 3, 4, 5, 9, 12};
    int tar1 = 12;
    cout << recursive_binary_search(arr1, tar1, 0, arr1.size() - 1) << endl;

    vector<int> arr2 = {-1, 0, 3, 5, 9, 12};
    int tar2 = 0;
    


    return 0;
}