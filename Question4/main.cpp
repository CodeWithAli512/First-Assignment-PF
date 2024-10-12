#include <iostream>
using namespace std;
int main()
{
    int numValues;
    cout << "Enter the number of values: ";
    cin >> numValues;

    // Read the first value and assume it's the smallest
    int smallest;
    cin >> smallest;

    // Read the remaining values and find the smallest
    for (int i = 1; i < numValues; ++i)
    {
        int value;
        cin >> value;
        if (value < smallest)
        {
            smallest = value;
        }
    }

    // Print the smallest value
    cout << "Smallest value: " << smallest << endl;

    return 0;
}