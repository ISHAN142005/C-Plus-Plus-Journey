#include <iostream>
using namespace std;
int main()
{

    int a;
    int max;
    cout << "Enter the total numbers you want to compare:";
    cin >> a;

    int array[a];

    for (int x = 0; x < a; x++)
    {
        cout << "Enter the " << x + 1 << " number:";
        cin >> array[x];
    }

    max = array[0];

    for (int i = 1; i < a; i++)
    {

        if (array[i] > max)
        {
            max = array[i];
        }
    }
    cout << "The largest number is:" << max << endl;

    return 0;
}
