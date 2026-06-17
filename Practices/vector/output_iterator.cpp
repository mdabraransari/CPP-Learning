#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>

using namespace std;

int main(){
    vector<int> v;
    int arr[] = { 10, 20, 30, 40};
    copy(arr, arr + 4, back_inserter(v));

    for(int x: v)
        cout << x << " ";

}