/*
15.Write a program to evaluate (a^b + c&d) where a, b, c, and d are user inputs.
Explain the precedence of bitwise operators in the program
*/
#include <iostream>
using namespace std;

int main()
{
    int a, b, c, d;

    cout << "Enter value of a: ";
    cin >> a;
    cout << "Enter value of b: ";
    cin >> b;
    cout << "Enter value of c: ";
    cin >> c;
    cout << "Enter value of d: ";
    cin >> d;

    int result = (a ^ b) + (c & d);

    cout << "Result = " << result << endl;

    return 0;
}