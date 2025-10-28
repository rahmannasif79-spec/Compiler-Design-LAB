#include <iostream>
using namespace std;

int main() {
    string s;
    cout << "Enter a string: ";
    cin >> s;

    if (!((s[0] >= 'A' && s[0] <= 'Z') || (s[0] >= 'a' && s[0] <= 'z') || s[0] == '_')) {
        cout << "Invalid Identifier";
        return 0;
    }

    for (int i = 1; i < s.length(); i++) {
        if (!((s[i] >= 'A' && s[i] <= 'Z') || (s[i] >= 'a' && s[i] <= 'z') ||
              (s[i] >= '0' && s[i] <= '9') || s[i] == '_')) {
            cout << "Invalid Identifier";
            return 0;
        }
    }

    cout << "Valid Identifier";
    return 0;
}
