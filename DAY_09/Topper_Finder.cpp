#include <iostream>
using namespace std;

struct Student
{
    string Name;
    string RollNumber;
    float Marks;
};

int main()
{
    Student S1;
    // S1.Name;
    // S1.RollNumber;
    // S1.Marks;

    Student S2;
    // S2.Name;
    // S2.RollNumber;
    // S2.Marks;

    cout << "Enter the Name of first student:";
    cin >> S1.Name;
    cout << "Enter the RollNumber of first student:";
    cin >> S1.RollNumber;
    cout << "Enter the Marks of first student:";
    cin >> S1.Marks;

    cout << "Enter the Name of second student:";
    cin >> S2.Name;
    cout << "Enter the RollNumber of second student:";
    cin >> S2.RollNumber;
    cout << "Enter the Marks of second student:";
    cin >> S2.Marks;

    if (S1.Marks > S2.Marks)
    {
        cout << "The topper is-" << endl;
        cout << "Name:" << S1.Name << endl;
        cout << "RollNumber:" << S1.RollNumber << endl;
        cout << "Marks:" << S1.Marks << endl;
    }
    else if (S1.Marks == S2.Marks)
    {
        cout << "Both have equal marks!" << endl;
    }
    else
    {
        cout << "The topper is-" << endl;
        cout << "Name:" << S2.Name << endl;
        cout << "RollNumber:" << S2.RollNumber << endl;
        cout << "Marks:" << S2.Marks << endl;
    }

    return 0;
}