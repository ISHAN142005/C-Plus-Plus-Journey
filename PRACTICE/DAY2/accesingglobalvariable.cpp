#include<iostream>
using namespace std;

int c=33;
int main(){

    int c;
    cout<<"Enter the value of(c):";
    cin>>c;
    cout<<"The value of (c) is:"<<c<<endl;
    cout<<"The value of global (c) is:"<<::c<<endl;



    return 0;
}