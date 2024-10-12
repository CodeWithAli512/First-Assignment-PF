#include <iostream>
using namespace std;

int main()
{
    int n = 5; // Adjust this to control the size

    // Upper part of the hourglass
    for (int i = n; i >= 1; i--)
    {
        // Print spaces
        for (int j = n; j > i; j--)
        {
            cout << " ";
        }
        // Print stars
        for (int j = 1; j <= (2 * i - 1); j++)
        {
            cout << "*";
        }
        cout << endl;
    }

    // Lower part of the hourglass
    for (int i = 2; i <= n; i++)
    {
        // Print spaces
        for (int j = n; j > i; j--)
        {
            cout << " ";
        }
        // Print stars
        for (int j = 1; j <= (2 * i - 1); j++)
        {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}
