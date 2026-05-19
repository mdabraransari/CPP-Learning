#include <iostream>
using namespace std;

class Add
{
public:
    int operator()(int a, int b, char c)
    {
        switch (c)
        {
        case '+':
            return a + b;
            break;
        case '-':
            return a - b;
            break;
        case '*':
            return a * b;
            break;
        case '/':
            return a / b;
            break;
        default: 
            return -1;
            break;
        }
    }
};

int main()
{

    Add obj;
    int a, b;
    char c;
    cout << "Enter first Number:\n";
    cin >> a;
    cout << "Enter second  Number:\n";
    cin >> b;
    cout << "Enter operation:\n";
    cin >> c;
    cout << "The given operation for " << a << " and " << b << " is " << obj(a, b, c);
    return 0;
}