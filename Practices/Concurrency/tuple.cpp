#include <iostream>
#include <tuple>
using namespace std;

int main(){
    tuple<int , string , double> t(1, "Abrar", 2.3);
    cout << get<0>(t) << endl;
    cout << get<1>(t) << endl;
    cout << get<2>(t) << endl;

}