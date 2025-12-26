#include <iostream>
using namespace std;
int main()
{

    int b = 44;
    int &c = b;

    cout << "The value of b is:" << b << endl;
    cout << "The value of c is:" << c << endl;

    return 0;
}