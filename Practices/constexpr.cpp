#include <iostream>
using namespace std;

constexpr int add(int a, int b){
    return a + b;
}

int main() {
   int x = 10;
   int y = add(x, 5);
   
   constexpr int z = add(3,5);
   cout << x << endl;
   cout << y;

   return 0;
}