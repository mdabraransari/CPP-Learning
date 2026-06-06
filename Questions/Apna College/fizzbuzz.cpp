#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Solution {
public:
    vector<string> fizzBuzz(int n) {
        vector<string> array;

        for(int i = 1; i <= n; i++) {
            if(i % 3 == 0 && i % 5 == 0) {
                array.push_back("FizzBuzz");
            }
            else if(i % 3 == 0) {
                array.push_back("Fizz");
            }
            else if(i % 5 == 0) {
                array.push_back("Buzz");
            }
            else {
                array.push_back(to_string(i));
            }
        }

        return array;
    }
};

int main() {
    Solution obj;
    int n;

    cout << "Enter n: ";
    cin >> n;

    vector<string> result = obj.fizzBuzz(n);

    for(string s : result) {
        cout << s << " ";
    }

    return 0;
}