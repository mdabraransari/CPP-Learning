#include <stdexcept>

class Vector {
    double* elem;
    int sz;

public: 
   Vector(int s){
          if(s < 0)
             throw std::invalid_argument("Size cannot be negative");
          elem = new double[s];
          sz = s;
   }
   int size() const { return sz; }
};