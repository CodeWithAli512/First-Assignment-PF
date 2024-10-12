#include <iostream>
using namespace std;

int main()
{
    int n = 5; // This defines the middle row, adjust for larger patterns

    // Upper part of the diamond
    for (int i = 1; i <= n; i++)
    {
        // Print spaces
        for (int j = i; j < n; j++)
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

    // Lower part of the diamond
    for (int i = n - 1; i >= 1; i--)
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
