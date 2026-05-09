#include <iostream>
using namespace std;

class GFG {
    public:
      int val;
      void show()
      {
        cout << "Value: " << val << endl;
      }

};
int main (){
    GFG a;
    a.val = 10;
    a.val = 50;
    a.show();
    return 0;
}