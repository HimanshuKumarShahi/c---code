#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    string str, reversed;

    cout << "Enter a string: ";
    getline(cin, str); // read string with spaces

    // Remove spaces and convert to lowercase (optional for strict check)
    string cleaned = "";
    for (char c : str) {
        if (isalnum(c)) // only letters and digits
            cleaned += tolower(c);
    }

    reversed = cleaned;
    reverse(reversed.begin(), reversed.end());

    if (cleaned == reversed)
        cout << "The string is a palindrome." << endl;
    else
        cout << "The string is not a palindrome." << endl;

    return 0;
}
