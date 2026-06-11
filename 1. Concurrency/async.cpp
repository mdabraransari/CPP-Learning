#include <iostream>
#include <future>
#include <chrono>
#include <thread>
using namespace std;

int add(int a, int b)
{
    return a + b;
}
int sub(int a, int b){
    return a - b;
}

int main()
{

    future<int> result = async(add, 5, 6);
    cout << "Doing other work..\n";
    this_thread::sleep_for(chrono::seconds(3));
    cout << "Result = " << result.get();

    return 0;
}
