#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool greater_than_10(int x){
    return x > 10;
}
int main(){
    vector<int> v = {2,4,5,11,14,23,53};
    // auto it = find_if(v.begin(), v.end(), greater_than_10);
    // if(it != v.end()){
    // cout << *it;
    // }
    for(int num: v){
        if(greater_than_10(num)){
            cout << num << " ";
        }
    }
}