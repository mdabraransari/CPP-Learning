#include <iostream>
#include <vector>
#include <list>
#include <algorithm>
#include <iterator>

using namespace std;

list<int> f(vector<int> &vec)
{
    list<int> res;
    sort(vec.begin(), vec.end());
    unique_copy(vec.begin(), vec.end(), back_inserter(res));

    return res;
}

int main()
{
    vector<int> v = {2, 3, 4, 4, 7, 8, 9, 0};
    list<int> result = f(v);
    cout << "Sorted Elements without Duplicates:\n";
    for (int x : result)
        cout << x << " ";

    return 0;
}