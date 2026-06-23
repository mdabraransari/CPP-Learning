#include <iostream>
#include <queue>
using namespace std;

int main() {
    priority_queue<int> q;
    q.push(5);
    q.push(3);
    q.push(7);
    q.push(9);
    q.push(100);

    while (!q.empty())
    {
        cout << q.top() << " ";
        q.pop();
    }
    
    

   return 0;
}