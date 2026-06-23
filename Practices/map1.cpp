#include <iostream>
#include <map>
using namespace std;

int main() {
    map<string, int> a;
    a["tv"] = 100;
    a["laptop"] = 1200;
    a["headphones"] = 1100;
    a["tablet"] = 30;
    a["watch"] = 110;
    a.erase("tv");
    for(auto p: a){
        cout << p.first << " " << p.second << endl;
    }
    cout << "count = " << a.count("laptop") << endl;
    if(a.find("camera") != a.end()){
        cout << "found\n";
    }else{ cout << "not found\n";}
   return 0;
}