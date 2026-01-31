#include <iostream>

class Calculator {
    public:
      int add(int a, int b);
};
// Implementation
int Calculator::add(int a, int b){
    return a + b;
}
int main(){
    Calculator cal; // instance
    std::cout << cal.add(2, 3);
}