#include <iostream>

int main()
{
    int count = 0;

repeat:
    std::cout << count << '\n';
    ++count;

    if (count < 3) {
        goto repeat;
    }

    return 0;
}
