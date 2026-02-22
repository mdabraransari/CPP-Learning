#include <iostream>
using namespace std;

template<typename... T>
void print(T... args)
{
    cout << sizeof...(args);
    cout << endl;
}

int main() {
   print(10);
   print(10, 20);
   print(12,34,56,7,8);
   return 0;
}