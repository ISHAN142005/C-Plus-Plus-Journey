#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the number:";
    cin >> n;
    cout << "The table of" << n << "is:" << endl;

    for (int i = 1; i <= 10; i++)
    {
        cout << n << "X" << i << "=" << i * n << endl;
    }
    return 0;
}