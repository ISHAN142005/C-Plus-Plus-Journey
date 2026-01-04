#include <iostream>
using namespace std;

class circle
{
private:
    float Radius;

public:
    void SetRadius(int r)
    {
        if (r > 0)
        {
            Radius = r;
        }
        else
        {
            cout << "Invalid Radius!Setting Radius=0" << endl;
            Radius = 0;
        }
    }

    float GetArea()
    {
        float Area = 3.14 * (Radius * Radius);
        return Area;
    }
    float GetCircumference()
    {
        float Circumference = 2 * 3.14 * Radius;
        return Circumference;
    }

    void GetData()
    {
        cout << "The radius of the circle is:" << Radius << endl;
        cout << "The area of the circle is:" << GetArea() << endl;
        cout << "The circumference of the circle is:" << GetCircumference() << endl;
    }
};

int main()
{
    circle c1;
    cout << "Case 1:Invalid Input" << endl;
    c1.SetRadius(-5);
    c1.GetData();

    cout << "Case 2:Valid Input" << endl;
    c1.SetRadius(10);
    c1.GetData();
    return 0;
}