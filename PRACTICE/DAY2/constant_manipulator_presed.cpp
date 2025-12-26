#include <iostream>
#include <iomanip> //This is used for setw()
using namespace std;
int main()
{

    const int a = 33;
    int b = 879, c = 98765;
    // a=333  -->If we execute this line then error will be visible
    cout << "The value of a is" << a << endl;

    cout << "The value of a is:" << setw(5) << a << endl;
    cout << "The value of b is:" << setw(5) << b << endl;
    cout << "The value of c is:" << setw(5) << c << endl;

    cout << "The value of a is:" << a << endl;
    cout << "The value of b is:" << b << endl;
    cout << "The value of c is:" << c << endl;

    //Presedence

    return 0;
}