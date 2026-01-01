#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main()
{
    // if not using algorithim library then this instructions
    //  cout << "INSTRUCTION-" << endl
    //       << "WRITE ALL LETTERS OF WORD IN UPPER CASE OR LOWER CASE !" << endl;
    string s;
    cout << "Enter the word which you want to check:";
    cin >> s;  //If taking line input then use-->getline(cin,s) instead of cin>>s;
    cout << "The entered word is: " << s << endl;
    transform(s.begin(), s.end(), s.begin(), ::toupper); // this is for transforming it into upper case
    int length = s.length();

    bool ispallindrome = true;

    for (int i = 0; i < (length / 2); i++)
    {
        if (s[i] != s[length - i - 1])
        {
            ispallindrome = false;
            break;
        }
    }

    if (ispallindrome)
    {
        cout << "The entered word is a Pallindrome Word!";
    }
    else
    {
        cout << "The entered word is not a Pallindrome Word!";
    }

    return 0;
}