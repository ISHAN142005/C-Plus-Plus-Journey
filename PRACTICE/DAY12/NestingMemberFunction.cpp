#include <iostream>
#include <string>
using namespace std;

class binary
{
    // private://yeh nhi likhe bina bbhi jo bhi cheez public ke bhar likhenge vo private hi rhegi
    string s;
    void chkfn(void);

public:
    void read(void);
    void onecompliment(void);
    void display(void);
};

void binary ::read(void)
{
    cout << "Enter the number:";
    cin >> s;
    chkfn(); // here we used nesting member function
}

void binary::chkfn(void)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) != '1' && s.at(i) != '0')
        {
            cout << "Invalid Number!" << endl
                 << "Entered number is not a Binary Number " << endl;
            exit(0);
        }
    }
}

void binary ::onecompliment(void)
{
    // chkfn();
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) == '1')
        {
            s.at(i) = '0';
        }
        else
        {
            s.at(i) = '1';
        }
    }
}

void binary::display(void)
{
    cout << "Displaying your Binary Number- " << endl;
    for (int i = 0; i < s.length(); i++)
    {
        cout << s.at(i);
    }
    cout << endl;
}

int main()
{

    binary a;
    a.read();
    a.display();
    a.onecompliment();
    a.display();

    return 0;
}