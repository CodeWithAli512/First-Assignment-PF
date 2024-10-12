#include <iostream>
using namespace std;
int main()
{
    // system("color  f0");
    // cout << "Hello, World!" << endl;
    int i = 0;
    while (i <= 5)
    {
        for (int j = i; j <= 5; j++)
        {
            cout << " ";
        }
        for (int k = 0; k < (2 * i - 1); k++)
        {
            cout << "*";
        }
        i++;
        cout << endl;
    }
}