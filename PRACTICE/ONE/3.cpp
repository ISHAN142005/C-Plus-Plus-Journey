#include <iostream>
#include <string>
using namespace std;
class course
{
private:
    string coursename;
    string instructor;
    int duration;

public:
    course(string c, string i, int d)
    {
        coursename = c;
        instructor = i;
        duration = d;
    }
    void display()
    {
        cout << "Course Name:" << coursename << endl;
        cout << "Instructor Name:" << instructor << endl;
        cout << "Duration(weeks):" << duration << endl;
    }
    ~course()
    {
        cout << "Couse deleted successfully:" << coursename << endl;
    }
};
int main()
{
    course c1("MATHS", "Manish Sharma", 3);
    course c2("PHYSICS", "Rahul Sharma", 3);

    c1.display();
    c2.display();
}
