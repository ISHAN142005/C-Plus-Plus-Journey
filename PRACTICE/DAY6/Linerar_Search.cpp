#include <iostream>
using namespace std;
int main()
{
    int Student_Id[10] = {12, 23, 44, 32, 45, 65, 40, 49, 40, 1};
    int found = 0;
    int index = -1;
    for (int i = 0; i < 10; i++)
    {
        if (Student_Id[i] == 42)
        {
            found = 42;
            index = i;
            break;
        }
    }
    if (found == 42)
    {
        cout << "Student Id no 42 is at index: " << index << endl;
    }
    else if (found != 42)
    {
        cout << "Student Id 42 not found" << endl
             << index << endl;
    }

    return 0;
}