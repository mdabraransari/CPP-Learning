#include <iostream>
#include <thread>
#include <future>
using namespace std;

void calculate(promise<int> p){
    int result = 10 * 10;
    p.set_value(result);
}

int main(){
    promise<int> p;

    future<int> f = p.get_future();
    thread t(calculate, move(p));
    cout << "Result = " << f.get() << endl;

    t.join();
}