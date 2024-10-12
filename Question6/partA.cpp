#include <iostream>
#include <cmath>
using namespace std;

bool isPrime(int num)
{
    if (num <= 1)
    {
        return false; // 0 and 1 are not prime
    }

    if (num == 2)
    {
        return true; // 2 is prime
    }

    if (num % 2 == 0)
    {
        return false; // even numbers > 2 are not prime
    }

    // Check odd factors up to the square root of num
    for (int i = 3; i <= sqrt(num); i += 2)
    {
        if (num % i == 0)
        {
            return false; // num is divisible by i, so it's not prime
        }
    }

    return true; // num is prime
}

int main()
{
    // Prompt the user to input a positive integer
    int num;
    cout << "Enter a positive integer: ";
    cin >> num;

    if (num <= 0)
    {
        cout << "Please enter a positive integer." << endl;
        return 1; // exit with error code
    }

    // Check if the number is prime
    if (isPrime(num))
    {
        cout << num << " is a prime number." << endl;
    }
    else
    {
        cout << num << " is not a prime number." << endl;
    }

    return 0;
}