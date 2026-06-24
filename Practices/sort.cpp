#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int arr[5] = {5, 4, 3, 2, 1};
    sort(arr, arr + 5 );
    sort(arr,arr + 5, greater<int>());

    for(int val: arr){
        cout << val << " ";
    }
    cout << endl;
    return 0;
}