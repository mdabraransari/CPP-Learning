#include <iostream>
using namespace std;

class Add
{
    public:
        int operator()(int a, int b)
        {
            return a + b;
        }
};

int main() {

   Add obj;
   cout << obj(2,3);
   return 0;
}