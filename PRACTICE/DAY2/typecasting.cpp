#include<iostream>
using namespace std;
int main(){

float a=22.99;
int b=22;

int c=int(a);
cout<<c;

cout<<"The sum of a and b is:"<<int(a)+float(b)<<endl;
cout<<"The sum of a and b is:"<<(int)a+(float)b<<endl;
cout<<"The sum of a and c is:"<<c+a<<endl;



    return 0;
}