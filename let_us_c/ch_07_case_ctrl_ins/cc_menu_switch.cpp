#include <iostream>
using namespace std;

int main() {
    int i = 0;  // Initialize i with a default value

    while(true) {  // Infinite loop
        cout << "\nMenu:\n";
        cout << "1. Factorial of a number\n";
        cout << "2. Prime or not\n";
        cout << "3. Odd or even\n";
        cout << "4. Exit\n";
        cout << "Enter number: ";
        cin >> i;

        switch(i) {
            case 1:
                cout << "Factorial of a number\n";
                break;
            case 2:
                cout << "Prime or not\n";
                break;
            case 3:
                cout << "Odd or even\n";
                break;
            case 4:
                cout << "Exiting the program.\n";
                return 0;  // Exit the program
            default:
                cout << "Invalid choice! Please try again.\n";
                break;
        }
    }

    return 0;
}
