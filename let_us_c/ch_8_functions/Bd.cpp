#include <iostream>
using namespace std;

void message();

int main()
{
    message();
    message();
    return 0;
}

void message() // Semicolon was given in the question here that was the mistake
{
    cout << "Praise worthy and C worthy are synonyms\n";
}