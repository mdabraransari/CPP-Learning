#include <iostream>
#include <thread>
using namespace std;

void task()
{
    cout << "Hello from thread\n";
}

int main()
{

    thread t1(task);

    cout << "Hello from main\n";

    t1.join();
}