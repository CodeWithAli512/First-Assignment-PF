#include <iostream>
using namespace std;
int main()
{
    // for (int i = 10; i >= 1; i--)
    // {
    //     for (int s = 1; s <= 10 - i; s++)
    //     {
    //         cout << " ";
    //     }
    //     for (int j = 1; j <= i; j++)
    //     {
    //         cout << "*";
    //     }
    //     cout << "\n";
    // }
    int i = 10;
    while (i >= 1)
    {
        for (int s = 1; s <= 10 - i; s++)
        {
            cout << " ";
        }
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        i--;
        cout << "\n";
    }
}