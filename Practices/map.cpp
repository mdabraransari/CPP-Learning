#include <iostream>
#include <map>
using namespace std;

int main() {

   map<int, string> fruits;
   fruits[1] = " Apple";
   fruits[2] = " Banana";
   fruits[3] = " Mango";
   fruits.insert({4, " Orange"});
   fruits.erase(2);
   for(auto x: fruits)
       cout << x.first << " :" << x.second <<endl;

    cout << "The size of map is " <<  fruits.size();

   return 0;
}