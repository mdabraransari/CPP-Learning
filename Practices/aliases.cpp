#include <iostream>
using namespace std;
class Add
{
    public:
      int operator() (int a, int b){
         return a + b;
      }
};
using MyAdder = Add;

typedef int Integer;
using Decimal = float;
int main() 
{
    Integer x = 10;
    cout << x << endl;
    Decimal y = 22;
    cout << y;
    MyAdder obj;
    cout << obj(2,3);
    return 0;
}