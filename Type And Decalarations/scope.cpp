#include <iostream>
using namespace std;
int x; //global
void f(){
    int x; // local x hides global x
    x = 1; // assign to local x
    {
        int x; // hides first local x
        x = 2; // assign to second local x
    }
    x = 3; // assign to first local x
}
int main() {

   int* p = &x;
   cout << p << endl;
   ::x = 2;// assign to global x
   cout << x;
   return 0;
}