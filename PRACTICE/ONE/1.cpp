/*
Q1. Create a class Student with data members: name and marks. Use a constructor to initialize
the values and  display the student details using a member function.
*/
#include <iostream>
#include <string>
using namespace std;
class Student
{
private:
    int marks;
    string name;

public:
    Student(int m, string n)
    {
        marks = m;
        name = n;
    }

    void display()
    {
        cout << "Name:" << name << endl;
        cout << "Marks:" << marks << endl;
    }
};

int main()
{
    Student S1(99, "Ishan");
    S1.display();

    return 0;
}