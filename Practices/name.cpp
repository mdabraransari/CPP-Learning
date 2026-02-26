#include <iostream>
using namespace std;

void hello(){
    cout << "Please Enter your name\n";
    string str;
    cin >> str;
    cout << "Hello, " << str <<"!\n";
}
void hello_line(){
    cout << "Enter your name:\n";
    string str;
    getline(cin, str);
    cout << "Hello, " << str << "!\n";
}
int main() {
    hello_line();
   return 0;
}