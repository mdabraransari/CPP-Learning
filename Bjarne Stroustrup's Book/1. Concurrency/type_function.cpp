#include <iostream>
#include <limits>

constexpr float min_value = std::numeric_limits<float>::min();
constexpr int int_size = sizeof(int);

int main()
{
    std::cout << "Minimum positive float value: " << min_value << '\n';
    std::cout << "Size of int: " << int_size << " bytes\n";
    return 0;
}
