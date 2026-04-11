#include <iostream>
#include <random>

using namespace std;

int main() {
   random_device rd;
   mt19937 gen(rd());
   uniform_int_distribution<> dist(1, 100);
   cout << dist(gen) << endl;
   return 0;
}