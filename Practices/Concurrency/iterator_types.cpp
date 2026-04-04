#include <iostream>
#include <iterator>
#include <vector>

using namespace std;

int main(){
    vector<int> v = {1,2,3};
    typedef iterator_traits<vector<int>::iterator>::value_type val;
    val x = 10;
    cout << x;
    return 0;
}