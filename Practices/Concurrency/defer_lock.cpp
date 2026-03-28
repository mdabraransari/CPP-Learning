#include <iostream>
#include <thread>
#include <mutex>
using namespace std;

mutex m1, m2;

void task1()
{
    unique_lock<mutex> lock1(m1, defer_lock);
    unique_lock<mutex> lock2(m2, defer_lock);
    lock(lock1, lock2);
    cout << "Task 1 is executing\n";
}
void task2()
{
    unique_lock<mutex> lock1(m1, defer_lock);
    unique_lock<mutex> lock2(m2, defer_lock);

    lock(lock1, lock2);
    cout << "Task 2 is executing\n";
}
int main()
{
    thread t1(task2);
    thread t2(task1);
    t1.join();
    t2.join();
    return 0;
}