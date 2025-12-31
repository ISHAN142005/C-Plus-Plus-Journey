#include <iostream>
using namespace std;
int main()
{
    // This  code(line(6-->26)) is for taking the input from the user
    int matrix[3][3];

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << "enter value matrix element [" << i + 1 << "][" << j + 1 << "]:";
            cin >> matrix[i][j];
            cout << endl;
        }
    }
    cout << "The matix is:" << endl;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
    // This is for finding the element co-ordinate

    int target;
    bool found = false;

    cout << "Enter the number you want to find:";
    cin >> target;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (matrix[i][j] == target)
            {
                cout << "The target value firstly found at :" << endl
                     << "Row:" << i + 1
                     << "Column:" << j + 1
                     << endl;
                found = true;

                break;
            }
        }
        if (found == true)
        {
            break;
        }
    }

    if (!found)
    {
        cout << "The target value not found !" << endl;
    }

    return 0;
}