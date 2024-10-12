#include <iostream>
using namespace std;
int main()
{

    int i = 1;
    while (i <= 10)
    {
        for (int s = 1; s <= 10 - i; s++)
        {
            cout << " ";
        }
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        i++;
        cout << "\n";
    }
}