#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(){
    int arr[5] = {5, 4, 3, 2, 1};
    sort(arr, arr + 5 );
    sort(arr,arr + 5, greater<int>());
    vector<pair<int, int>> vec = { {3,2},{2,1},{7,1},{5,2}};
    sort(vec.begin(), vec.end());

    // for(int val: arr){
    //     cout << val << " ";
    // }
    // cout << endl;
    for(auto p: vec){
        cout << p.first << " " << p.second << endl;
    }
    return 0;
}