#include <iostream>
#include <deque>

using namespace std;

int main() {

   deque<int> d;
   
   d.push_back(10);
   d.push_front(20);
   d.push_front(30);

   for(int x: d)
       cout << x << " ";
   return 0;
}