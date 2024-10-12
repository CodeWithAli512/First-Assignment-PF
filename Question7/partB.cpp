#include <iostream>
using namespace std;
int main()
{
    int i = 10;
    while (i >= 1)
    {
        for (int j = 0; j < i; j++)
        {
            cout << "*";
        }
        i--;
        cout << endl;
    }
}