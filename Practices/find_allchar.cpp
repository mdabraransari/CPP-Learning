#include <iostream>
#include <vector>
using namespace std;

vector<string::iterator> find_all(string& s, char c)
{
    vector<string::iterator> res;
    for(auto p = s.begin(); p != s.end(); ++p){
        if(*p==c){
            res.push_back(p);
        }
    }
    return res;
}


void test()
{
    string m {"Hello How are you?"};
    cout << "Searching in: " << m << '\n';
    char target = 'H';
    auto res = find_all(m, target);

    cout << "Found " << res.size() << " occurrences of '" << target << "'\n";
    for (auto it : res) {
        cout << "  position=" << (it - m.begin()) << ", char='" << *it << "'\n";
    }
    for(auto p: res)
        if(*p!=target)
           cerr << "a bug!\n";
}

int main() {
    test();
   return 0;
}