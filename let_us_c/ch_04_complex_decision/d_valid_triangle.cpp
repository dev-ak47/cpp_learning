#include <iostream>
using namespace std;

int main() {
    int s1, s2, s3;
    cout << "Enter side1, side2, side3: ";
    cin >> s1 >> s2 >> s3;

    // Check if the sum of any two sides is greater than the third side
    if ((s1 + s2 > s3) && (s1 + s3 > s2) && (s2 + s3 > s1)) {
        cout << "The triangle is valid.";
    } else {
        cout << "The triangle is invalid.";
    }

    return 0;
}