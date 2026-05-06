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
using Character = char;
int main() 
{
    Integer x = 10;
    cout << x << endl;
    Decimal y = 22;
    cout << y << endl;
    MyAdder obj;
    cout << obj(2,3) << endl;
    Character a = 'd';
    cout << a;
    return 0;
}