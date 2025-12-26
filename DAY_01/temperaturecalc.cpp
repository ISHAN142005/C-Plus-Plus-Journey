#include <iostream>
using namespace std;
int main()
{
    /*
    Ask the user to choose a mode:

"Press 1 for Celsius to Fahrenheit"

"Press 2 for Fahrenheit to Celsius"

Take the user's choice (input).

Ask for the temperature value.

Calculate and print the result.
    */

    int mode;
    float temp, result;

    cout << "Press 1 for Celcius to Fahrenheit.\nPress 2 for Fahrenheit to Celcius.\n";
    cout << "Enter the number:";
    cin >> mode;

    if (mode == 1)
    {
        cout << "Enter the temperature in Celcius:";
        cin >> temp;
        result = (temp * (9.0 / 5.0)) + 32.0;
        cout << "The temperature in Fahrenheit is:" << result;
    }
    else if (mode == 2)
    {
        cout << "Enter the temperature in Fahrenheit:";
        cin >> temp;
        result = (temp-32.0)*(5.0 / 9.0);
        cout << "The temperature in Celcius is:" << result;
    }
    else{
        cout<<"INVALID INPUT";
    }

    return 0;
}


//or

/*
#include <iostream>
using namespace std;

int main() {
    int mode;
    float temp, result;

    cout << "Press 1 for Celsius to Fahrenheit." << endl;
    cout << "Press 2 for Fahrenheit to Celsius." << endl;
    cout << "Enter your choice: ";
    cin >> mode;

    if (mode == 1) {
        cout << "Enter temperature in Celsius: ";
        cin >> temp;
        result = (temp * (9.0 / 5.0)) + 32.0;
        cout << "Temperature in Fahrenheit: " << result << endl;
    } 
    else if (mode == 2) { // logic optimization
        cout << "Enter temperature in Fahrenheit: ";
        cin >> temp;
        result = (temp - 32.0) * (5.0 / 9.0);
        cout << "Temperature in Celsius: " << result << endl;
    } 
    else { // Handling invalid input
        cout << "Invalid choice! Please restart and enter 1 or 2." << endl;
    }

    return 0;
}
*/