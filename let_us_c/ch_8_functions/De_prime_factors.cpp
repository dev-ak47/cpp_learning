#include <iostream>
using namespace std;

int prime_fact(int n);

int main()
{
    int pi;
    cout << "Enter any positive integer to get its Prime Factorial: ";
    cin >> pi;
    int result = prime_fact(pi);
    return 0;
}

int prime_fact(int n)
{
    bool is_prime = true;

    if (n == 0 || n == 1)
    {
        is_prime = false;
    }
    for (int i = 2; i <= n / 2; ++i)
    {
        if (n % i == 0)
        {
            is_prime = false;
            break;
        }
    }
    if (is_prime)
    {
        cout << "It is a prime factor.\n";
    }
    else
    {
        cout << "It is not prime factor.\n";
    }
    return is_prime;
}