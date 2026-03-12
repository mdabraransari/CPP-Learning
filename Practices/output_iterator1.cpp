#include <iostream>
#include <iterator>
#include <vector>
#include <algorithm>

using namespace std;
int main(){
    vector<int> v = { 1,2,3,4,5};
    ostream_iterator<int> out(cout, " ");
    copy(v.begin(), v.end(), out);
}
