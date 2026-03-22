#include <iostream>
#include <thread>
#include <mutex>
using namespace std;

mutex m;
int counter = 0;

void work(){
    m.lock();

    for(int i = 0; i<100000; i++){
        counter++;
    }
    m.unlock();
}

int main(){
    thread t1(work);
    thread t2(work);

    t1.join();
    t2.join();

    cout << counter;
}