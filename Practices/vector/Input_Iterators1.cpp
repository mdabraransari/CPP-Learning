#include <iostream>
#include <iterator>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    istream_iterator<string> in(cin);
    istream_iterator<string> eos{};

    vector<string> v(in, eos);
    for(auto s: v)
       cout << s << endl;
}