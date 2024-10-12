#include <iostream>
using namespace std;

int main()
{
    int n = 5; // Number of rows above the base (adjust this for size)

    // Upper triangle part (hollow)
    for (int i = 1; i < n; i++)
    {
        // Print spaces before stars
        for (int j = i; j < n; j++)
        {
            cout << " ";
        }
        // Print stars and hollow space
        for (int j = 1; j <= (2 * i - 1); j++)
        {
            if (j == 1 || j == (2 * i - 1))
            {
                cout << "*"; // Print stars at the boundaries
            }
            else
            {
                cout << " "; // Print space in the middle
            }
        }
        cout << endl;
    }

    // Base part (completely filled)
    for (int i = 1; i <= (2 * n - 1); i++)
    {
        cout << "*";
    }
    cout << endl;

    return 0;
}
