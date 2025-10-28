#include <iostream>
using namespace std;

int main() {
    int n, i;
    cout << "Enter number of elements: ";
    cin >> n;

    int a[n];
    cout << "Enter " << n << " elements: ";
    for (i = 0; i < n; i++)
        cin >> a[i];

    int min = a[0], max = a[0];

    for (i = 1; i < n; i++) {
        if (a[i] < min)
            min = a[i];
        if (a[i] > max)
            max = a[i];
    }

    cout << "Minimum = " << min << endl;
    cout << "Maximum = " << max;
    return 0;
}
