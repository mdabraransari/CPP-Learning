#include <iostream>
#include <vector>
#include <list>
#include <algorithm>

using namespace std;

struct Entry {
    string name;
    int number;
};

bool operator<(const Entry& x, const Entry& y){
    return x.name<y.name;
}
void f(vector<Entry>& vec, list<Entry>& Ist)
{
    sort(vec.begin(),vec.end());
    unique_copy(vec.begin(),vec.end(),Ist.begin());
}
list<Entry> f(vector<Entry>& vec)
{
    list<Entry> res;
    sort(vec.begin(),vec.end());
    unique_copy(vec.begin(),vec.end(),back_inserter(res));
    return res;
}
int main() {
   return 0;
}