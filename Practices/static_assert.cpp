
// #include <iostream>

// static_assert(sizeof(int) >= 4, "int must be 4 bytes");

// int main() {
// 	std::cout << "sizeof(int) = " << sizeof(int) << " bytes\n";
// 	return 0;
// }

#include <iostream>
#include <type_traits>

using namespace std;

template <typename T>
void printNumber(T x)
{
    static_assert(std::is_integral<T>::value,
                    "Error: T must be an integer type!");

    cout << "Number is: " << x << endl;
}
int main()
{
    static_assert(sizeof(int) == 4, "Error: int must be 4 bytes!");
    printNumber(10);
    // printNumber(5.5);

    return 0;
}