#include <iostream>

using namespace std;

int main() {
    const double PI = 3.14159;
    double radius, area;

    cout << "Enter the radius of the circle: ";
    cin >> radius;

    area = PI * radius * radius;

    cout << "The area is: " << area << endl;

    return 0;
}
