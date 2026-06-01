#include <iostream>
using namespace std;

int main() {

   int v[] = {1,2,3,4};
   int* p1 = v;
   int* p2 = &v[0];
   int* p3 = v+4;

   cout << p1 << endl;
   cout << p2 << endl;
   cout << p3 << endl;
   for(int* p = v; p != v + 4; ++p)
       cout << *p << " ";

   return 0;
}