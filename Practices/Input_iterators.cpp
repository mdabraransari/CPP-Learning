#include <iostream>
#include <iterator>

using namespace std;

int main() {

   cout << "Enter nubers:\n";
   
   istream_iterator<int> it(cin);
   istream_iterator<int> end;

   while(it != end)
   {
    cout << *it << " ";
    ++it;
   }
   return 0;
}