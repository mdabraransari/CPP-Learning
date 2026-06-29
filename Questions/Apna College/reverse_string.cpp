#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <sstream>

using namespace std;
string reverse_string(const string& str) {
    istringstream input(str);
    vector<string> words;
    string word;

    while (input >> word) {
        words.push_back(word);
    }

    reverse(words.begin(), words.end());

    string result;
    for (int i = 0; i < words.size(); i++) {
        if (i > 0) {
            result += " ";
        }
        result += words[i];
    }

    return result;
}

int main() {
    string s;

    cout << "Enter a string: ";
    getline(cin, s);
    string reversed = reverse_string(s);
    /*
        Problem:
        Reverse the order of words in the string.

        Example:
        Input:  "  hello   world  "
        Output: "world hello"

        Rules:
        - Remove leading and trailing spaces.
        - Keep only one space between words.
        - Do not reverse characters inside each word.
    */

    // Write your logic here.

    cout << "Reversed words: " << reversed << endl;

    return 0;
}
