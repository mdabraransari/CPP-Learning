#include <iostream>
using namespace std;

void intval()
{
    for(char c; cin>>c;){
        cout << "the value of'" << c << "' is " << int{c} << "\n";
    }
}
int main() {
    intval();
   return 0;
}