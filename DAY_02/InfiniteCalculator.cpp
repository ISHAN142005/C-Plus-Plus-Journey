#include <iostream>
using namespace std;
/*
The Code Requirements:

Step 1: Ask the user for two numbers.

Step 2: Ask for an operation (+, -, *, /).

Step 3: Use a switch statement to calculate the result.

Step 4 (The Upgrade): Wrap the whole thing in a do-while loop.

After showing the answer, ask: "Do you want to use the calculator again? (y/n)"

If they press y, the program restarts immediately.

If n, it says "Goodbye" and ends.
*/
int main()
{

    int a, b, op;
    char pref;

    cout << "^_^  WELCOME TO INFINITE CALCULATOR  ^_^" << endl;

    do
    {

        cout << "'a' should be greater than 'b'" << endl;
        cout << "Enter the first number(a):";
        cin >> a;
        cout << "Enter the second number(b):";
        cin >> b;

        cout << "Keys for operators in calculator:" << endl
             << "1 for +" << endl
             << "2 for -" << endl
             << "3 for /" << endl
             << "4 for *" << endl;

        cout << "Enter the operator you want to use:";
        cin >> op;
        switch (op)
        {
        case 1:
            cout << a << "+" << b << "=" << a + b << endl;
            break;
        case 2:
            cout << a << "-" << b << "=" << a - b << endl;
            break;
        case 3:
            if (b == 0)
            {
                cout << "Division with 0 not possible!" << endl;
            }
            else
            {
                cout << a << "/" << b << "=" << float(a) / b << endl;
            }
            break;
        case 4:
            cout << a << "X" << b << "=" << a * b << endl;
            break;
        default:
            cout << "Invalid Input" << endl;
        }
        cout << "Do you want to use calculator again?(y/n)" << endl;
        cin >> pref;

    } while (pref == 'y' || pref == 'Y');

    cout << "Goodbye!^_^" << endl;

    return 0;
}