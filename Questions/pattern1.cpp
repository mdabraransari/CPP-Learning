#include <iostream>
using namespace std;

int main() {

   char a = 'A';
   int n;
   cout << "Enter n:\n";
   cin >> n;

   for(int i = 1; i <= n; i++){
    for(int j = 1; j <= n; j++){
        
        cout << a << " ";
        a++;
        if(a > 'Z'){
            a = 'A';
        }

    }
      cout << endl;
   }
   return 0;
}