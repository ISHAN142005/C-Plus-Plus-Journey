#include <iostream>
using namespace std;
int main()
{
    int a, b;

    cout << "Enter the first number(a):";
    cin >> a;
    cout << "Enter the second number(b):";
    cin >> b;
 //ARITHMETIC OPERATORS
    cout << "The sum of first number(a) and second number(b) is:" << a + b << endl;
    cout << "The difference of first number(a) and second number(b) is:" << a - b << endl;
    cout << "The multiplication of first number(a) and second number(b) is:" << a * b << endl;
    cout << "The division of first number(a) and second number(b) is:" << a / b << endl;
    cout << "The remainder of first number(a) to second number(b) is:" << a % b << endl;
    cout<<"The a++ is:"<<a++<<endl;
    cout<<"The ++a is:"<<++a<<endl;
    cout<<"The a-- is:"<<a--<<endl;
    cout<<"The --a is:"<<--a<<endl;

//ASSIGNMENT OPERATORS--> ==

//COMPARISON OPERATORS--> <,>,==,!=,<=,>=

cout<<"Is a>b:"<<(a>b)<<endl;
cout<<"Is a>=b:"<<(a>=b)<<endl;
cout<<"Is a<b:"<<(a<b)<<endl;
cout<<"Is a<=b:"<<(a<=b)<<endl;
cout<<"Is a==b:"<<(a==b)<<endl;
cout<<"Is a!=b:"<<(a!=b)<<endl;

//LOGICAL OPERATORS-->&&  ||  !(&&)   !(||)

cout<<"Is a>b and a==5:"<<((a>b)&&(a==5))<<endl;
cout<<"Is a>b or a==5:"<<((a>b)||(a==5))<<endl;
cout<<"Is a>b or a==5:"<<!((a>b)||(a==5))<<endl;
cout<<"Is a>b or a==5:"<<!((a>b)||(a==5))<<endl;

return 0;
}