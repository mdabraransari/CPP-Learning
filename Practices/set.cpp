#include <iostream>
#include <set>
using namespace std;

int main() {
    set<int> s;
    s.insert(5);
    s.insert(1);
    s.insert(3);
    s.insert(3);

    for(auto x: s){
        cout << x << " ";
    }

   return 0;
}