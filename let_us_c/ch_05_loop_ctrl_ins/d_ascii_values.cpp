#include <iostream>
using namespace std;

int main() {
    int asciiValue = 0; 
    while (asciiValue <= 255) {
        cout << "ASCII Value: " << asciiValue 
             << " - Character: " << static_cast<char>(asciiValue) << endl;
        ++asciiValue; 
    }

    return 0;
}