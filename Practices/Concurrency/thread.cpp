#include <iostream>
#include <vector>
#include <thread>
#include <functional>
void f(std::vector<double> &v)
{
    for (double &x : v)
    {
        x *= 2;
        std::cout << x << ' ';
    }
    std::cout << '\n';
}

struct F
{
    std::vector<double> &v;
    F(std::vector<double> &vv) : v{vv} {}
    void operator()()
    {
        for (double &x : v)
        {
            x += 1;
            std::cout << x << ' ';
        }
        std::cout << '\n';
    }
};

int main()
{
    std::vector<double> some_vec{1, 2, 3, 4, 5, 6, 7, 8, 9};
    std::vector<double> vec2{10, 11, 12, 13, 14};

    std::thread t1{f, std::ref(some_vec)};
    std::thread t2{F{vec2}};
    // both will try to print the numbers at a same time

    t1.join();
    t2.join();
    return 0;
}
