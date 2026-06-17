#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool isEven(int x) {
    return x % 2 == 0;
}

int main(){
    vector<int> v = {1,2,3,4,5,6,7,8};
    int c = count_if(v.begin(),v.end(),isEven);

    cout << "Even Numbers are " << c << "\n";

    vector<pair<string,int>> k = {
        {"A", 10},
        {"B", 25},
        {"C", 15},
        {"D", 21}
    };
    int d = count_if(k.begin(),k.end(), [](pair<string,int> p){
        return p.second > 12;
    });
    cout << d;

}