#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> v = {12,15,19};

    vector<int>::iterator it;
    for(it = v.begin(); it != v.end(); it++)
       cout << *it << " ";
}