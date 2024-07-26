#include <iostream>
using namespace std;

int main() {
    int n;
    unsigned long long factorial = 1;

    // Prompt user for input
    cout << "Enter a positive integer: ";
    cin >> n;

    // Check for negative input
    if (n < 0) {
        cout << "Factorial is not defined for negative numbers." << endl;
    } else {
        // Calculate factorial iteratively
        for (int i = 1; i <= n; ++i) {
            factorial *= i;
        }
        cout << "Factorial of " << n << " = " << factorial << endl;
    }

    return 0;
}