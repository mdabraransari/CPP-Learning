#include <iostream>
using namespace std;
class Vector {
    double* elem;
    int sz;
 public: 
   Vector(int s) {
    sz = s;
    elem = new double[sz];
   }
   ~Vector() {
      delete[] elem;
   }
   double& operator[](int i) {
    return elem[i];
   }
   int size() {
       return sz;
   }
};
int main() {
    Vector v(5);
    cout << "Size = " << v.size() << endl;
    v[0] = 10;
    v[1] = 20;
    v[2] = 30;
    cout << v[1] << endl;
}