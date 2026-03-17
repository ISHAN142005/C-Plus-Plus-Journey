
#include <iostream>
using namespace std;
class Student
{
private:
    int scores[5];

public:
    void input()
    {
        for (int i = 0; i < 5; i++)
        {
            cin >> scores[i];
        }
    }

    int calculateTotalScore()
    {
        int total = 0;
        for (int i = 0; i < 5; i++)
        {
            total += scores[i];
        }
        return total;
    }
};

int main()
{
    int n;
    cin >> n;

    Student s[n];

    for (int i = 0; i < n; i++)
    {
        s[i].input();
    }

    int kristensTotal = s[0].calculateTotalScore();

    int count = 0;
    for (int i = 1; i < n; i++)
    {
        int total = s[i].calculateTotalScore();
        if (s[i].calculateTotalScore() > kristensTotal)
        {
            count++;
        }
    }
    cout << count;

    return 0;
}
