#include <iostream>
using namespace std;
int main() {
    string input;
    cout << "Enter an expression: ";
    cin >> input;
    int operatorCount = 0;
    for (int i = 0; i < input.length(); i++) {
        char ch = input[i];
        if (ch == '+' || ch == '-' || ch == '*' || ch == '/' || ch == '%' || ch == '=') {
            operatorCount++;
            cout << "operator" << operatorCount << ": " << ch << endl;
        }
    }
    if (operatorCount == 0) {
        cout << "No operators found" << endl;
    }
    return 0;
}
