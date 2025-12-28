#include <iostream>
using namespace std;
int main()
{

    int i = 99;  // Ye i ki value hai
    int *j = &i; // idhar apan ne pointer banaya hai
    //&i is the address of i
    // pointer j now holds the address of variable i
    //*j it holds the value at that address i.e value pf i!
    cout << "The address of i is:" << j << endl;
    cout << "The address of i is:" << &i << endl;

    cout << "The value of i is:" << i << endl;
    cout << "The value of i is:" << *j << endl;

    *j = 1; // idhar humne without using i ,i ki value change kar di
    cout << "The updated value of i is:" << i << endl;
    cout << "The updated value of i is:" << *j << endl;
    // this is the main use of pointers

    // pointer to pointer
    int **k = &j;        // ye jo k pointer hai vo j pointer ka address store kar rha hai
    cout << k << endl;   // yeh address of j
    cout << *k << endl;  // yeh bhi address of i
    cout << **k << endl; // yeh i ki value ki output me dega

    // experiment
    int *c = j + 1;
    cout << c; // iska output +4 aayega as int take 4 bytes

    return 0;
}