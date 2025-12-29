#include <iostream>
using namespace std;
int main()
{
    int N;
    cin >> N;
    int array[N];

    for (int i = 0; i < N; i++)
    {
        cin >> array[i];
    }
    for (int j = (N - 1); j >= 0; j--)
    {
        cout << array[j];
        cout << " ";
    }
    return 0;
}