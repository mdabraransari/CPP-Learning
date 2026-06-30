#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<vector<int>> a = { {3,4}, {2,3},{1,4}};
    sort(a.begin(), a.end());
    
    for(int i = 0; i < a.size(); i++){
        for(int j =0; j < a[0].size(); j++){
            cout << a[i][j] << " ";
        }
        cout << endl;
    }

   return 0;
}