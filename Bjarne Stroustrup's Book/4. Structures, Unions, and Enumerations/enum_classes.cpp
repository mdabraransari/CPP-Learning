#include <iostream>
using namespace std;

int main(){
enum class Traffic_light{red, yellow , green};
enum class Warning {green, yellow , orange, red};
Warning a1 = 7;//error: no int->Warning conversion
int a2 = green; // error: green not in scope;
int a3 = Warning::green;// error: no Warning -> int conversion
Warning a4 = Warning::green; //ok
}