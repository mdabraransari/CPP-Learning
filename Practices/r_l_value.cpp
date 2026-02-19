#include <iostream>
using namespace std;

void func(int &x)
{
    cout << "Lvalue reference\n";
}
void func(int &&x)
{
    cout << "Rvalue reference\n";
}
int main()
{
    int a = 10;
    func(a);
    func(10);
}