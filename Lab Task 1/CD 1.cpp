#include <iostream>
using namespace std;
int main() {
    string input;
    cout << "Enter a value: ";
    cin >> input;

    for (int i = 0; i < input.length(); i++) {
        if (input[i] < '0' || input[i] > '9') {
            cout << "Not numeric" << endl;
            return 0;
        }
    }
    cout << "Numeric constant" << endl;
    return 0;
}
