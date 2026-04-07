#include <iostream>
#include <utility>
using namespace std;

int main() {
   pair<int, string> p;
   p.first = 1;
   p.second = "Abrar";

   cout << p.first << " " << p.second;

   return 0;
}