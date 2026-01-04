#include <iostream>
using namespace std;

class Student
{
private:
    int a, b, c;

public:
    int d, e, f;
    void SetData(int a1, int b1, int c1); // Only Declaration
    void GetData()
    {
        cout << "The value of a is:" << a << endl;
        cout << "The value of b is:" << b << endl;
        cout << "The value of c is:" << c << endl;
        cout << "The value of d is:" << d << endl;
        cout << "The value of e is:" << e << endl;
    }
};

void Student ::SetData(int a1, int b1, int c1)
{
    a = a1;
    b = b1;
    c = c1;
}

int main()
{
    Student Ishan;
    Ishan.SetData(10, 11, 12);
    Ishan.d = 13;
    Ishan.e = 14;
    Ishan.f = 15;
    // Ishan.a = 15;        If this will be comment out then error will be there as it is private
    // Ishan.b = 1112;      If this will be comment out then error will be there as it is private
    // Ishan.c = 1215;      If this will be comment out then error will be there as it is private
    Ishan.GetData();

    return 0;
}