#include <iostream>
using namespace std;
int main()
{
    int Student_Id[8] = {10, 20, 10, 30, 10, 40, 50, 10};
    int target;
    int index = -1;
    int found = 0;

    cout << "Enter the Student Id you want to search:";
    cin >> target;
    for (int i = 0; i < 8; i++)
    {
        if (Student_Id[i] == target)
        {
            cout << ""
                    "Student Id no "
                 << target << " " << "is at index :" << i << endl;
            index = i;
            found++;
        }
    }
    cout << "Student Id" << target << " " << " found" << " " << found << " " << "times." << endl;
    if (index == -1)
    {
        cout << "Student Id" << target << "not found" << endl
             << index << endl;
    }

    return 0;
}
