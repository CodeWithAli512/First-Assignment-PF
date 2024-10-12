#include <iostream>
using namespace std;

int main()
{
    // Initialize the first two numbers of the sequence
    int a1 = 1;
    int a2 = 1;

    // Read the number of terms to print
    int numTerms;
    cout << "Enter the number of terms to print: ";
    cin >> numTerms;

    // Print the first two terms
    cout << a1 << " " << a2 << " ";

    // Print the remaining terms using a while loop
    int term = 3;
    while (term <= numTerms)
    {
        int an = a1 + a2;
        cout << an << " ";
        a1 = a2;
        a2 = an;
        term++;
    }

    cout << endl;

    return 0;
}