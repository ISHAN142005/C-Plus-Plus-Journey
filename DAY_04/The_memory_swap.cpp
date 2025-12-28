#include <iostream>
using namespace std;

void smartswap(int *a, int *b);

void smartswap(int *a, int *b)
{

    int temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    int n1, n2;

    cout << "Enter first number (n1):";
    cin >> n1;
    cout << "Enter second number (n2):";
    cin >> n2;

    cout << "***BEFORE SWAP***" << endl;
    cout << "The first number is:" << n1 << endl;
    cout << "The second number is:" << n2 << endl;

    smartswap(&n1, &n2);

    cout << "***AFTER SWAP***" << endl;
    cout << "The first number is:" << n1 << endl;
    cout << "The second number is:" << n2 << endl;

    return 0;
}