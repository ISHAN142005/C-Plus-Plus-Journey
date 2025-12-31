#include <iostream>
using namespace std;
int main()
{

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
    cout << "The matix is-" << endl;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
    cout << "The transpose of matix is-" << endl;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << matrix[j][i] << " ";
        }
        cout << endl;
    }

    return 0;
}