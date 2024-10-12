// To display the number 2, 5, 8, 11, 14, 17, 20

#include <iostream>
using namespace std;
int coma(int n) {}
int main()
{
    int num = 2;
    do
    {
        cout << num << " ";
        num = num + 3;
    } while (num <= 20);

    // cout << "2, 5, 8, 11, 14, 17, 20";
}