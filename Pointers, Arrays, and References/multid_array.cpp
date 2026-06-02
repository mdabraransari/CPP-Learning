#include <iostream>
using namespace std;
int ma[3][5];
void int_ma(){
    for(int i = 0; i != 3; i++){
        for(int j = 0; j != 5; j++){
            ma[i][j] = 10*i+j;
        }
    }
}
void print_ma(){
     for(int i = 0; i != 3; i++){
        for(int j = 0; j != 5; j++){
            cout << ma[i][j] << '\t';
        }
        cout << endl;
    }
}

int main() {

   int_ma();
   print_ma();
  
   return 0;
}