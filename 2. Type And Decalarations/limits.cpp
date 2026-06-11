#include <limits>
#include <iostream>
#include <type_traits>
using namespace std;

int main(){
    cout << boolalpha;
    cout << "##size of Types##" << endl;

    cout << "size of long " << sizeof(1L)<< '\n';
    cout << "size of long long " << sizeof(1LL) << '\n';

    cout << "largest float == "<< numeric_limits<float>::max() << '\n';
    cout << "char is signed == "<< numeric_limits<char>::is_signed<< '\n';
    cout << "char is unsigned == "<< is_unsigned<char>::value << '\n';

}
