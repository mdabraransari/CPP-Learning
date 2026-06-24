#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
    unordered_map<string, int> m;
    m.emplace("tv", 100);
    m.emplace("latop",300);
    m.emplace("watch", 1900);
    m.emplace("fridge", 900);
    for(auto c: m){
         cout << c.first << " " << c.second << endl;
    }

   return 0;
}