#include <iostream>
#include <random>
using namespace std;

int main() {
   random_device rd;
   mt19937 gen(rd());
   uniform_int_distribution<> dist(1, 100);
   int moves = 0;
   int a;
   cout << "\t### Guess number ###\n";
   

   return 0;
}