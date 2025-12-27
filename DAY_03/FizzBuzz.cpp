/*The Mission: FizzBuzz 🐝
Write a program that prints numbers from 1 to 100. But there are rules:

If the number is divisible by 3, print "Fizz" instead of the number.

If the number is divisible by 5, print "Buzz" instead of the number.

If the number is divisible by BOTH 3 and 5, print "FizzBuzz" (e.g., 15, 30).

Otherwise, just print the number.
*/

#include <iostream>
using namespace std;
int main()
{

    for (int i = 1; i <= 100; i++)
    {
        if (i % 15 == 0)
        {
            cout << "FizzBuzz" << endl;
        }

        else if (i % 5 == 0)
        {
            cout << "Buzz" << endl;
        }
       else  if (i % 3 == 0)
        {
            cout << "Fizz" << endl;
        }

        else
        {
            cout << i << endl;
        }
    }

    return 0;
}