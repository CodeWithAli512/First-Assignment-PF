#include <iostream>
using namespace std;

int main()
{
    string name = "Ali haider";
    int count = 0;

    while (count <= 24)
    {
        cout << name;
        count++;

        if (count % 5 == 0)
        {
            cout << endl;
        }
        else
        {
            cout << " ";
        }
    }

    return 0;
}