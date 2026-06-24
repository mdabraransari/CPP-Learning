#include <iostream>
#include <string>

using namespace std;

int main() {
//    char str[100];
//    cout << "Enter char array: ";
//    cin.getline(str,100);
//    cin.getline(str,100,'$');
   string sentence;
   getline(cin, sentence);

   
   cout << "output: " << sentence << endl;
   return 0;
}