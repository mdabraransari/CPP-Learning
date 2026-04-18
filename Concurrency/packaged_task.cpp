#include <iostream>
#include <future>
#include <thread>
using namespace std;

int add(int a, int b)
{
    return a + b;
}
int main()
{
    packaged_task<int(int, int)> task(add);

    future<int> result = task.get_future();
    thread t(move(task), 5, 6);
    cout << result.get();
    t.join();

    return 0;
}