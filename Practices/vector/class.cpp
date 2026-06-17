#include <iostream>
using namespace std;

class Vector
{
private:
    int sz;
    double& operator[](int i) { return elem[i]; }

public:
    double* elem;
    Vector(int s)
        :elem{new double[s]}, sz{s}
        {
        }
    int size() const { return sz; }
};



int main() {
    Vector v(6);
    for (int i = 0; i < 5; ++i) {
        v.elem[i] = i * 2.5;
    }
    for (int i = 0; i < 5; ++i) {
        cout << v.elem[i] << " ";
    }
    cout << endl;
    cout << v.size();
   return 0;
}