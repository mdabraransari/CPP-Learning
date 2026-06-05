#include <iostream>
using namespace std;
void f(){
    int var = 1;
    int& r {var};// r and var now refer to the same int
    int x = r; // 
    r = 2;
    cout << r << endl;
    cout << var;
}
int main(){
    f();
}