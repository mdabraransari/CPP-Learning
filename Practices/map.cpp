#include <iostream>
#include <map>
using namespace std;

int main() {

   map<int, string> fruits;
   fruits[1] = " Apple";
   fruits[2] = " Banana";
   fruits[3] = " Mango";
   for(auto x: fruits)
       cout << x.first << " :" << x.second <<endl;

   return 0;
}