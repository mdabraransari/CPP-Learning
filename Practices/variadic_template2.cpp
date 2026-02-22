#include <iostream>
using namespace std;
int sum(){
    return 0;
}

template<typename T, typename... Rest>
int sum(T first, Rest... rest)
{
    return first + sum(rest...);
}

int main() {
    cout << sum(10, 20, 30, 40, 50);
   return 0;
}