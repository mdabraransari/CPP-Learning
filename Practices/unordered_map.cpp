#include <iostream>
#include <map>
#include <unordered_map>
using namespace std;
 unordered_map<string, int> id{
         {"Alex", 1234},
         {"Smith", 2345},
         {"David", 3456}
    };

int get_id(const string& s){
   return id[s];
}

int main() {
  cout << get_id("David");
   return 0;
}