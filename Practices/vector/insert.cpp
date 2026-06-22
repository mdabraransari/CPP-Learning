#include <iostream>
#include <vector> 
using namespace std;

int main() {

   vector<int> vec = {1, 2, 3, 4, 5, 6, 7};
   vec.insert(vec.begin()+2, 100);
   for(int c: vec){
    cout << c << " ";
   }
   cout << endl;
   return 0;
}