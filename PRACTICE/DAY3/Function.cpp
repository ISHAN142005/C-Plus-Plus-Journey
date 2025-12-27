#include <iostream>
using namespace std;

// Function Prototype
int sum(int a, int b);
void g();

int main()
{

    g();
    int num1, num2;

    cout << "Enter the first number:";
    cin >> num1;
    cout << "Enter the first number:";
    cin >> num2;

    cout << "The sum of two numbers is:" << sum(num1, num2) << endl;

    return 0;
}

// Function
int sum(int a, int b)
{
    int c = a + b;
    return c;
}

// Void Function
void g()
{
    cout << "Hello" << endl
         << "Welcome to C++ World" << endl;
}