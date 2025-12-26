#include <iostream>
using namespace std;
int main()
{

    float a = 34.2;
    long double b = 34.2;

    cout << "The value of a is:" << a << endl;
    cout << "The value of b is:" << b << endl;
    cout << "The size of 34.2 is:" << sizeof(34.2) << endl;
    cout << "The size of 34.2 is:" << sizeof(34.2l) << endl;
    cout << "The size of 34.2 is:" << sizeof(34.2L) << endl;
    cout << "The size of 34.2 is:" << sizeof(34.2f) << endl;
    cout << "The size of 34.2 is:" << sizeof(34.2F) << endl;

    return 0;
}