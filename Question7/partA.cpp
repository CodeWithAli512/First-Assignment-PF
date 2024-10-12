#include <iostream>
using namespace std;
int main()
{
    int i = 1;
    while (i <= 10)
    {
        for (int j = 0; j < i; j++)
        {
            cout << "*";
        }
        i++;
        cout << endl;
    }
}