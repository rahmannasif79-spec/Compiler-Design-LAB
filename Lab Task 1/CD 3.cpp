#include <iostream>
#include <string>
using namespace std;
int main() {
    string s;
    getline(cin, s);
    if (s.find("//") == 0)
        cout << "Single-line comment";
    else if (s.find("/*") == 0)
        cout << "Multi-line comment";
    else
        cout << "Not a comment";
    return 0;
}
