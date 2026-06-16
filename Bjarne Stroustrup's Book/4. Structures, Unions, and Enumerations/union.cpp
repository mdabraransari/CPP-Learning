#include <iostream>
using namespace std;

/* A union is a struct in which all members are allocated at the same address,
   so that the union occupies only as much space as its largest member. */
union Value {
    char* s;
    int i;
};

int main()
{
    Value v;
    char text[] = "hello";

    v.i = 12345;
    cout << "v.i = " << v.i << '\n';
    cout << "sizeof(Value) = " << sizeof(Value) << '\n';
    cout << "address of v.s = " << &v.s << '\n';
    cout << "address of v.i = " << &v.i << '\n';

    v.s = text;
    cout << "v.s = " << v.s << '\n';

    return 0;
}
