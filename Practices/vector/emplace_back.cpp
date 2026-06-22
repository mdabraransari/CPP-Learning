#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> vec;
    vec.emplace_back(12);
    vec.push_back(43);
    cout << vec[0] << endl;
    vector<int> vec2(vec);
    for(int c: vec2){
        cout << c << " ";
    }


   return 0;
}