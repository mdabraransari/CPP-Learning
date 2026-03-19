#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;

int main(){
    vector<int> a = { 1, 2, 3, 2, 4, 6,2};
    replace(a.begin(),a.end(),2, 99);

    for(int x: a)
        cout << x << " ";
    return 0;
}