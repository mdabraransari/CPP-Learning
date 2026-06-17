#include <vector>
#include <iostream>
using namespace std;

int main() {
    vector<int> v { 1,2,3,4,5,6};
    for(int x: v){
        cout << x << endl;
    }
    cout << v.at(3) << endl; // it is bound check
    cout << v.size() << endl;
    v.push_back(10);
    cout << "last element " << v.at((v.size()) - 1) << endl;
}