#include <iostream>
using namespace std;
int main()
{
    int end;
    int evenSum = 0;
    int oddSum = 0;
    cout << "Enter a ending number: ";
    cin >> end;
    for (int i = 0; i < end; i++)
    {
        if (i % 2 == 0)
        {
            evenSum += i;
        }
        else
        {
            oddSum += i;
        }
    }
    cout << "Sum of even numbers: " << evenSum << endl;
    cout << "Sum of odd numbers: " << oddSum << endl;
}