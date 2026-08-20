#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void print(int x){
    cout << x << " ";

}
int main()
{
    vector<int> v = {10, 20, 30, 40};
    for_each(v.begin(),v.end(),print);
}