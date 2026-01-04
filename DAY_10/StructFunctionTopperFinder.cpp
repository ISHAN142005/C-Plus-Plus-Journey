#include <iostream>
using namespace std;

typedef struct Student
{
    string Name;
    string RollNumber;
    float Marks;
} s;

Student GetstudentDetail()
{
    Student S0;
    cout << "Enter the Name of student:";
    cin >> S0.Name;
    cout << "Enter the RollNumber of student:";
    cin >> S0.RollNumber;
    cout << "Enter the Marks of student:";
    cin >> S0.Marks;

    return S0;
}

int main()
{

    cout << "Enter the details of first student-" << endl;
    Student S1 = GetstudentDetail();

    cout << "Enter the details of second student-" << endl;
    Student S2 = GetstudentDetail();

    if (S1.Marks > S2.Marks)
    {
        cout << "The topper is-" << endl;
        cout << "Name:" << S1.Name << endl;
        cout << "RollNumber:" << S1.RollNumber << endl;
        cout << "Marks:" << S1.Marks << endl;
    }
    else if (S2.Marks > S1.Marks)
    {
        cout << "The topper is-" << endl;
        cout << "Name:" << S2.Name << endl;
        cout << "RollNumber:" << S2.RollNumber << endl;
        cout << "Marks:" << S2.Marks << endl;
    }

    else
    {
        cout << "Both have same marks!" << endl;
    }

    return 0;
}