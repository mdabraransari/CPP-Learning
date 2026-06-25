#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;

    cout << "Enter a string: ";
    getline(cin, s);

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

    cout << "Reversed words: " << endl;

    return 0;
}
