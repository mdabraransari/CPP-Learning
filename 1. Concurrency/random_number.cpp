#include <functional>
#include <iostream>
#include <random>
using namespace std;
using my_engine = default_random_engine;
using my_distribution = uniform_int_distribution<>;

int main() {
    my_engine re{random_device{}()};
    my_distribution one_to_six{1, 6};

    auto die = bind(one_to_six, re);
    int x = die();

    std::cout << "Random number: " << x << '\n';
    return 0;
}
