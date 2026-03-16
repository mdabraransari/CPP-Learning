#include <iostream>
#include <map>
#include <algorithm>
using namespace std;

struct Greater_than {
    int val;
    Greater_than(int v): val{v} { }
    bool operator()(const pair<string, int>& r) { return r.second > val; }
};

auto f(map<string,int>& m){
     return find_if(m.begin(), m.end(),Greater_than(2));
     
}

int main() {
    map<string, int> k;
    k["A"] = 4;
    k["B"] = 2;
    k["C"] = 3;
    k["D"] = 5;
    auto p = f(k);
    if (p != k.end()){
        cout << p->first << ": " << p-> second;

    } else{
        cout << "not found";
    }
   return 0;
}