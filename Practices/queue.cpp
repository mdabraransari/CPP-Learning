#include <iostream>
#include <queue>
using namespace std;

int main(){
    queue<int> q;

    q.push(10);
    q.push(20);
    q.push(30);

    cout << "Front element: " << q.front() << endl;
    cout << "Back element: " << q.back() << endl;
    q.pop();

    cout << "Front after pop: " << q.front() << endl;
    
    cout << "Queue size: " << q.size() << endl;
    // cout << "Queue elements are\n";
    // while (!q.empty())
    // {
    //     cout << q.front() << " ";
    //     q.pop();
    // }
    
}